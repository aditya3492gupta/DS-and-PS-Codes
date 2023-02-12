#include "polynomial.h"
poly_node *poly_add(poly_node *start1, poly_node *start2)
{
    poly_node *p, *q, *r = NULL;
    p = start1;
    q = start2;
    while (p != NULL && q != NULL)
    {
        if (p->power == q->power)
        {
            r = insert_end(r, p->coeff + q->coeff, p->power);
            p = p->link;
            q = q->link;
        }
        else
        {
            if (p->power > q->power)
            {
                r = insert_end(r, p->coeff, p->power);
                p = p->link;
            }
            else
            {
                r = insert_end(r, q->coeff, q->power);
                q = q->link;
            }
        }
    }
    while (p != NULL)
    {
        r = insert_end(r, p->coeff, p->power);
        p = p->link;
    }
    while (q != NULL)
    {
        r = insert_end(r, q->coeff, q->power);
        q = q->link;
    }
    return r;
}
int main()
{
    poly_node *start1, *start2, *start3 = NULL;
    int co, exp, n1, n2;
    printf("Enter number of nodes in linked list A\n");
    scanf("%d", &n1);
    printf("Enter number of nodes in linked list B\n");
    scanf("%d", &n2);
    printf("Enter linked list A\n");
    start1 = create(n1);
    display(start1);
    printf("Enter linked list B\n");
    start2 = create(n2);
    display(start2);
    printf("Linked List A + Linked List B\n");
    start3 = poly_add(start1, start2);
    display(start3);
    return 0;
}