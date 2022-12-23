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

node *create()
{
    node *NEW1, *temp, *NEW, *start;
    int element;
    char ans = 'y';
    printf("Enter the element\n");
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
void display(node *start)
{
    node *temp;
    temp = start;
    printf("\n");
    if (temp == NULL)
        printf("The list is empty \n");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("Null\n");
}
node *merge(node *start, node *start1)
{

    node *dummyNode = getnode();

    node *temp = getnode();

    while (start != NULL && start1 != NULL)
    {
        if (start->data < start1->data)
        {
            temp->link = start;
            start = start->link;
            temp = temp->link;
        }
        else
        {
            temp->link = start1;
            start1 = start1->link;
            temp = temp->link;
        }

        while (start != NULL)
        {
            temp->link = start;
            start = start->link;
            temp = temp->link;
        }
        while (start1 != NULL)
        {
            temp->link = start1;
            start1 = start1->link;
            temp = temp->link;
        }
    }
    return dummyNode->link;
}
int main()
{
    printf("Create the Linked List 1\n");
    node *start, *start1, *new = NULL;
    start = NULL;
    start1 = NULL;
    start = create();
    printf("Create Linked List 2\n");
    start1 = create();
    display(start);
    display(start1);
    new = merge(start, start1);
    printf("Linked List after merging\n");
    display(new);
    return 0;
}