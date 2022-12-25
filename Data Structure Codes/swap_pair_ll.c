#include "linked_list.h"
int main()
{
    node *start, *new;
    int n;
    printf("Create Linked List\n");
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    start = create(n);
    printf("The linked list is\n");
    display(start);
    printf("Swap node pair wise\n");
    pair_swap(start);
    printf("Linked list after swapping is\n");
    display(start);
    return 0;
}