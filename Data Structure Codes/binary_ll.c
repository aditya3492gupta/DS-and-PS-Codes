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
    int ele;
    printf("Enter the element to be searched\n");
    scanf("%d", &ele);
    if (binary_search(start, ele) == NULL)
        printf("Value not present\n");
    else
        printf("Present");
    return 0;
}