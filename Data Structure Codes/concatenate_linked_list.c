#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct node
{
    int data;
    struct node *link;
} Node;
Node *getnode()
{
    Node *n1;
    n1 = (Node *)malloc(sizeof(Node));
    n1->link = NULL;
    return n1;
}
Node *create()
{
    Node *NEW1, *temp, *NEW, *start;
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
    return start;
}
void *display(Node *start)
{
    Node *temp;
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

Node *concatenate(Node *a, Node *b)
{
    if (a != NULL && b != NULL)
    {
        if (a->link == NULL)
            a->link = b;
        else
            concatenate(a->link, b);
    }
    else
        printf("Either a or b is NULL\n");
    return a;
}

int main()
{
    Node *start1, *start2, *new;
    start1 = NULL;
    start2 = NULL;
    printf("Enter the elements in the first linked list\n");
    start1 = create();
    display(start1);
    printf("Enter the elements in the second linked list\n");
    start2 = create();
    display(start2);
    printf("After concatenation\n");
    new = concatenate(start1, start2);
    display(new);

    return 0;
}
