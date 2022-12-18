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
node *Clone(node *list)
{
    if (list == NULL)
        return NULL;

    node *result = getnode();
    result->data = list->data;
    result->link = Clone(list->link);
    return result;
}
int main()
{
    printf("Create the Linked List\n");
    node *start, *start2;
    start = NULL;
    start2 = NULL;
    start = create();
    display(start);
    printf("\nCopy the linked list\n");
    start2 = Clone(start);
    display(start2);
    return 0;
}