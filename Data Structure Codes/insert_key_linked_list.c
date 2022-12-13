#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct NODE
{
    int data;
    struct NODE *link;
} node;
node *getnode()
{
    node *n1;
    n1 = (node *)malloc(sizeof(node));
    n1->link = NULL;
    return n1;
}
void display(node *start)
{
    node *temp;
    temp = start;
    if (temp == NULL)
        printf("The list is empty \n");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("Null\n");
}
node *create()
{
    node *NEW1, *temp, *NEW, *start;
    int element;
    char ans = 'y';
    printf("\nEnter the element\n");
    scanf("%d", &element);
    NEW = getnode();
    start = NEW;
    temp = start;
    NEW->data = element;
    NEW->link = NULL;
    printf("Do you want to enter more elements:y or n\n");
    ans = getche();
    while (ans == 'y')
    {
        printf("\nEnter the element\n");
        scanf("%d", &element);
        NEW1 = getnode();
        if (NEW1 == NULL)
            printf("\nOverflow");
        else
        {
            temp->link = NEW1;
            NEW1->data = element;
            temp = NEW1;
            NEW1->link = NULL;
        }
        printf("Do you want to enter more elements:y or n\n");
        ans = getche();
    }
    getch();
    return start;
}
node *insert_key(node *start)
{
    node *New, *temp;
    int element, key;
    printf("\nEnter the value after which you want to insert\n");
    scanf("%d", &key);
    printf("Enter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (node *)malloc(sizeof(node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp != NULL && temp->data != key)
        temp = temp->link;
    if (temp == NULL)
        printf("\nKey value not present in linked list");
    else
        New->data = element;
    New->link = temp->link;
    temp->link = New;
    return (start);
}
int main()
{
    node *start;
    start = NULL;
    char ch;
    int n;
    printf("Do you want to create linked list: y or n\n");
    ch = getche();
    start = create();
    display(start);
    printf("Insert element at key");
    start = insert_key(start);
    display(start);
    return 0;
}