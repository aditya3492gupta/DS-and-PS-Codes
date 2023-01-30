#include "linked_list.h"
node *delete_x(node *start, int x)
{
    node *current, *next, *ptr;
    if (start->data == x)
    {
        ptr = start;
        start = ptr->link;
        free(ptr);
    }
    current = start;
    while (current->link != NULL)
    {
        if (current->link->data == x)
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
    int n, x;
    printf("Enter number of nodes in the linked list\n");
    scanf("%d", &n);
    printf("Enter element in linked list\n");
    start = create(n);
    display(start);
    printf("Enter the number to be deleted\n");
    scanf("%d", &x);
    start = delete_x(start, x);
    printf("The linked list after deleting %d is\n", x);
    display(start);
    return 0;
}