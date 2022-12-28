#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Node
{
    int data;
    struct Node *link;
} cir_node;
cir_node *getnode()
{
    cir_node *n1;
    n1 = (cir_node *)malloc(sizeof(cir_node));
    n1->link = NULL;
    return n1;
}
cir_node *create(int n)
{
    cir_node *start, *temp;
    cir_node *new;
    new = getnode();
    start = new;
    temp = start;
    int i, ele;
    for (i = 1; i <= n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &ele);
        if (new == NULL)
        {
            printf("Overflow\n");
            exit(0);
        }
        else
        {
            temp->link = new;
            new->data = ele;
            temp = new;
            new->link = start;
        }
        new = getnode();
    }
    return start;
}
void display(cir_node *start)
{
    cir_node *temp;
    temp = start;
    if (temp == NULL)
        printf("The list is empty \n");
    do
    {
        printf("%d->", temp->data);
        temp = temp->link;
    } while (temp != start);
    printf("Head\n");
}
cir_node *insert_front(cir_node *start)
{
    cir_node *new;
    int element;
    printf("Enter the element\n");
    scanf("%d", &element);
    new = getnode();
    new->data = element;
    cir_node *p = start->link;
    while (p->link != start)
        p = p->link;
    // at this point p is pointing at last node
    p->link = new;
    new->link = start;
    start = new;
    return (start);
}
cir_node *delete_front(cir_node *start)
{
    cir_node *temp;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    temp = start;
    start = temp->link;
    cir_node *p = start->link;
    do
        p = p->link;
    while (p->link != temp);

    p->link = start;
    free(temp);
    return (start);
}
cir_node *insert_end(cir_node *start)
{
    cir_node *New, *temp;
    int element;
    printf("\nEnter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (cir_node *)malloc(sizeof(cir_node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp->link != start)
        temp = temp->link;
    New->data = element;
    temp->link = New;
    New->link = start;
    return (start);
}
cir_node *delete_end(cir_node *start)
{
    cir_node *temp, *ptr;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    ptr = start;
    while (ptr->link != start)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    temp->link = start;
    free(ptr);
    return (start);
}

cir_node *insert_key(cir_node *start)
{
    cir_node *New, *temp;
    int element, key;

    display(start);
    printf("\nEnter the value before which you want to insert\n");
    scanf("%d", &key);
    printf("\n enter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (cir_node *)malloc(sizeof(cir_node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp != start && temp->data != key)
    {
        temp = temp->link;
    }
    if (temp == NULL)
        printf("\nKey value not present in linked list");
    else
        New->data = element;
    New->link = temp->link;
    temp->link = New;
    return (start);
}
cir_node *delete_key(cir_node *start)
{
    cir_node *temp, *ptr;
    int key;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    ptr = start;
    printf("Enter the key value you want to delete\n");
    display(start);
    scanf("%d", &key);
    temp = ptr;
    while (ptr->data != key)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    if (start->data == key)
        start = ptr->link;
    else
        temp->link = ptr->link;
    free(ptr);
    return (start);
}