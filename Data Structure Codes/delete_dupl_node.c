#include "linked_list.h"
node *delete_duplicate(node *start)
{
    node *current = start, *next;
    while (current->link != NULL)
    {
        if (current->data == current->link->data)
        {
            next = current->link->link;
            free(current->link);
            current->link = next;
        }
        else
            current = current->link;
    }
    return start;
}
int main()
{
    node *start;
    int n;
    printf("Enter number of nodes in the linked list\n");
    scanf("%d", &n);
    printf("Enter element in linked list\n");
    start = create(n);
    display(start);
    start = delete_duplicate(start);
    printf("The linked list after deleting duplicate nodes is\n");
    display(start);
    return 0;
}