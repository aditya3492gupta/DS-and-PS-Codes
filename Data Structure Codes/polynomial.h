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
