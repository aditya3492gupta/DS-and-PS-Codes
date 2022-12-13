#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;
void display(Node *start)
{
    struct node *temp;
    temp = start;
    if (temp == NULL)
        printf("The list is empty \n");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}

Node *concatenate(Node *a, Node *b)
{
    if (a != NULL && b != NULL)
    {
        if (a->next == NULL)
            a->next = b;
        else
            concatenate(a->next, b);
    }
    else
        printf("Either a or b is NULL\n");
    return a;
}
Node *getnode()
{
    Node *n1;
    n1 = (Node *)malloc(sizeof(Node));
    n1->next = NULL;
    return n1;
}
int main()
{
    Node *prev, *a, *b, *p, *new;
    int n, i;
    printf("Enter number of elements in linked list a\n");
    scanf("%d", &n);
    a = NULL;
    printf("Enter the elements in the linked list\n");
    for (i = 0; i < n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (a == NULL)
            a = p;
        else
            prev->next = p;
        prev = p;
    }
    printf("Enter number of elements in linked list b\n");
    scanf("%d", &n);
    b = NULL;
    printf("Enter the elements in the linked list\n");
    for (i = 0; i < n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (b == NULL)
            b = p;
        else
            prev->next = p;
        prev = p;
    }
    printf("After concatenation\n");
    a = concatenate(a, b);
    display(a);

    return 0;
}
