#include "linked_list.h"
node *split_mid(node *start)
{
    node *q = start, *p = start->link, *start2 = NULL;
    while (p != NULL && p->link != NULL)
    {
        q = q->link;
        p = p->link->link;
    }
    start2 = q->link;
    q->link = NULL;
    return start2;
}
int main()
{
    node *start, *start2 = NULL;
    printf("Enter number of nodes\n");
    int n;
    scanf("%d", &n);
    start = create(n);
    printf("The linked list is\n");
    display(start);
    start2 = split_mid(start);
    printf("Linked list after spliting from middle are\n");
    display(start);
    display(start2);
    return 0;
}