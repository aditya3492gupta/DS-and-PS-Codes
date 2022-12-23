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
node *ascend(node *start)
{
    node *ptr, *cmp;
    int temp;
    ptr = start;
    while (ptr->link != NULL)
    {
        cmp = ptr->link;
        while (cmp != NULL)
        {
            if (ptr->data > cmp->data)
            {
                temp = ptr->data;
                ptr->data = cmp->data;
                cmp->data = temp;
            }
            cmp = cmp->link;
        }
        ptr = ptr->link;
    }
    return start;
}
int main()
{
    printf("Create the Linked List\n");
    node *start;
    start = NULL;
    start = create();
    display(start);
    start = ascend(start);
    printf("Linked list after sorting in ascending order\n");
    display(start);
    return 0;
}