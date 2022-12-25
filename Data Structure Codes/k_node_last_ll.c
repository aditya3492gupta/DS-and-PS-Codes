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
node *create(int n)
{
    node *start, *new, *temp;
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
            new->link = NULL;
        }
        new = getnode();
    }
    return start;
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
void k_node_last(node *start, int ele)
{
    node *temp;
    temp = start;
    int count = 0, i;
    while (temp != NULL)
    {
        temp = temp->link;
        count++;
    }
    if (count < ele)
        printf("Enter valid value");
    temp = start;
    for (i = 1; i < count - ele + 1; i++)
        temp = temp->link;
    printf("The kth node from last is %d", temp->data);
    // printf("%d", temp->data);
}
int main()
{
    node *start;
    int n;
    printf("Create Linked List\n");
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    start = create(n);
    printf("The linked list is\n");
    display(start);
    int ele;
    printf("Enter node number from last\n");
    scanf("%d", &ele);
    k_node_last(start, ele);
    return 0;
}