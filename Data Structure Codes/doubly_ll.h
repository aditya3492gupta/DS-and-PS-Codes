#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} doubly_node;
doubly_node *getnode()
{
    doubly_node *n1;
    n1 = (doubly_node *)malloc(sizeof(doubly_node));
    n1->prev = NULL;
    n1->next = NULL;
    return n1;
}
doubly_node *create(int n)
{
    doubly_node *start, *new, *temp;
    new = getnode();
    start = new;
    temp = start;
    start->prev = NULL;
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
            temp->next = new;
            new->prev = temp;
            new->data = ele;
            temp = new;
            new->next = NULL;
        }
        new = getnode();
    }
    return start;
}
void display(doubly_node *start)
{
    doubly_node *temp;
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
doubly_node *insert_front(doubly_node *start)
{
    doubly_node *new;
    // temp = start;
    int element;
    printf("Enter the element\n");
    scanf("%d", &element);
    new = (doubly_node *)malloc(sizeof(doubly_node));
    if (new == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    new->prev = NULL;
    new->data = element;
    new->next = start;
    start->prev = new;
    start = new;
    return (start);
}
doubly_node *delete_front(doubly_node *start)
{
    doubly_node *temp;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    temp = start;
    start = temp->next;
    start->prev = NULL;
    free(temp);
    return (start);
}
doubly_node *insert_end(doubly_node *start)
{
    doubly_node *New, *temp;
    int element;
    printf("\nEnter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (doubly_node *)malloc(sizeof(doubly_node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    New->data = element;
    temp->next = New;
    New->prev = temp;
    New->next = NULL;
    return (start);
}
doubly_node *delete_end(doubly_node *start)
{
    doubly_node *temp, *ptr;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    ptr = start;
    while (ptr->next != NULL)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = NULL;
    free(ptr);
    return (start);
}
doubly_node *insert_key(doubly_node *start)
{
    doubly_node *New, *temp;
    int element, key;
    printf("\nEnter the value after which you want to insert\n");
    display(start);
    scanf("%d", &key);
    printf("\n enter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (doubly_node *)malloc(sizeof(doubly_node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }
    if (temp == NULL)
        printf("\nKey value not present in linked list");
    else
        New->data = element;
    New->next = temp->next;
    temp->next = New;
    New->prev = temp;
    return (start);
}
doubly_node *delete_key(doubly_node *start)
{
    doubly_node *temp, *ptr;
    int key;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    ptr = start;
    printf("\nEnter the key value you want to delete");
    display(start);
    scanf("%d", &key);
    temp = ptr;
    while (ptr->data != key)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    if (start->data == key)
        start = ptr->next;
    else
    {
        temp->next = ptr->next;
        ptr->next->prev = temp;
    }
    free(ptr);
    return (start);
}