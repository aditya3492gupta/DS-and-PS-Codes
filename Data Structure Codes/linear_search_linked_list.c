#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Node
{
    int data;
    struct Node *link;
} node;
node *getnode()
{
    node *n1;
    n1 = (node *)malloc(sizeof(node));
    n1->link = NULL;
    return n1;
}
node *create_node()
{
    node *new, *new1, *temp, *start;
    printf("\nEnter the element\n");
    int ele;
    scanf("%d", &ele);
    new = getnode();
    start = new;
    temp = start;
    new->data = ele;
    new->link = NULL;
    char ans;
    printf("Do you want to enter more elements:y or n\n");
    ans = getche();
    while (ans == 'y')
    {
        printf("\nEnter the element\n");
        scanf("%d", &ele);
        new1 = getnode();
        if (new1 == NULL)
            printf("\nOverflow");
        else
        {
            temp->link = new1;
            new1->data = ele;
            temp = new1;
            new1->link = NULL;
        }
        printf("Do you want to enter more elements:y or n\n");
        ans = getche();
    }
    getch();
    return start;
}
node *linear_search(node *start)
{
    int count = 0;
    int ele;
    node *current = start;
    printf("\nEnter element to be searched\n");
    scanf("%d", &ele);
    if (current == NULL)
        printf("\nLinked List has 0 nodes in it");
    else
    {
        while (current != NULL)
        {
            if (current->data == ele)
                printf("Element %d is found at %d node\n", ele, count + 1);
            current = current->link;
            count++;
        }
        if (count == 0)
            printf("Element not found");
    }
}
int main()
{
    printf("Create the Linked List");
    node *start;
    start = NULL;
    start = create_node();
    linear_search(start);
    return 0;
}