#include "linked_list.h"
int main()
{
    node *start;
    int n;
    printf("Create Linked List\n");
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    start = create(n);
    printf("The linked list is\n");
    display(start);
    printf("The middle element of the linked list is\n");
    int mid;
    mid = middle(start);
    printf("%d", mid);
    return 0;
}