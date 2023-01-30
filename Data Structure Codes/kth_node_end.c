#include "linked_list.h"
node *delete_kth_end(node *start, int n, int k)
{
    node *current = start, *ptr;
    k = n + 1 - k;
    int count = 0;
    while (current != NULL)
    {
        count++;
        if (count == k)
        {
            ptr = current;
            current = ptr->link;
            free(ptr);
        }
        else
            current = current->link;
    }
    return start;
}
int main()
{
    node *start;
    int n, k;
    printf("Enter number of nodes in the linked list\n");
    scanf("%d", &n);
    printf("Enter element in linked list\n");
    start = create(n);
    display(start);
    printf("Enter th kth node from end\n");
    scanf("%d", &k);
    start = delete_kth_end(start, n, k);
    printf("The linked list after deleting %dth node from end is\n", k);
    display(start);
    return 0;
}