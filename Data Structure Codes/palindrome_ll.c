#include "linked_list.h"
int main()
{
    node *start;
    node *rev;
    int n;
    printf("Create Linked List\n");
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    start = create(n);
    printf("The linked list is\n");
    display(start);
    printf("The reverse of the linked list is\n");
    rev = reverse(start);
    display(rev);
    int pal = palindrome(start, rev);
    if (pal == n)
        printf("Palindrome linked list");
    else
        printf("Not palindrome");
    return 0;
}