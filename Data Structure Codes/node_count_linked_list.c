#include <stdio.h>
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
node *count(node *start)
{
    int count = 0;
    if (start == NULL)
        printf("\nLinked List has 0 nodes in it");
    else
    {
        while (start != NULL)
        {
            start = start->link;
            count++;
        }
        printf("\nThe linked list has %d nodes in it", count);
    }
}
int main()
{
    node *start;
    start = NULL;
    printf("Do you want create the Linked List\n");
    char ans;
    ans = getche();
    if (ans == 'y')
    {
        node *start;
        start = NULL;
        start = create_node();

        count(start);
    }
    else
        count(start);
    return 0;
}