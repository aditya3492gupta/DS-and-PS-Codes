#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct NODE
{
    int coeff;
    int power;
    struct NODE *link;
} poly_node;
poly_node *getnode()
{
    poly_node *n1;
    n1 = (poly_node *)malloc(sizeof(poly_node));
    n1->link = NULL;
    return n1;
}
poly_node *create(int n)
{
    poly_node *start, *new, *temp;
    new = getnode();
    start = new;
    temp = start;
    int i, co, po;
    for (i = 1; i <= n; i++)
    {
        printf("Enter the coefficient and power\n");
        scanf("%d%d", &co, &po);
        if (new == NULL)
        {
            printf("Overflow\n");
            exit(0);
        }
        else
        {
            temp->link = new;
            new->coeff = co;
            new->power = po;
            temp = new;
            new->link = NULL;
        }
        new = getnode();
    }
    return start;
}
poly_node *insert_end(poly_node *start, int co, int exp)
{
    poly_node *p = getnode();
    p->coeff = co;
    p->power = exp;
    p->link = NULL;
    if (start == NULL)
        start = p;
    else
    {
        poly_node *q = start;
        while (q->link != NULL)
            q = q->link;
        q->link = p;
    }
    return start;
}
void display(poly_node *start)
{
    poly_node *temp;
    temp = start;
    if (temp == NULL)
        printf("The list is empty \n");
    while (temp != NULL)
    {
        printf("%dx^%d->", temp->coeff, temp->power);
        temp = temp->link;
    }
    printf("Null\n");
}