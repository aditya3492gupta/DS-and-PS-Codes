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
node *middle_node(node *start, node *last)
{
    if (start == NULL)
        return NULL;
    node *slow = start;
    node *fast = start->link;
    while (fast != last)
    {
        fast = fast->link;
        if (fast != last)
        {
            slow = slow->link;
            fast = fast->link;
        }
    }
    return slow;
}
node *binary_search(node *start, int ele)
{
    node *head = start;
    node *last = NULL;
    do
    {
        node *mid = middle_node(start, last);
        if (mid == NULL)
            return NULL;
        if (mid->data == ele)
            return mid;
        else if (mid->data < ele)
            start = mid->link;
        else if (mid->data > ele)
            last = mid;
    } while (last == NULL || last != start);
    return NULL;
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
    printf("Enter the element to be searched\n");
    scanf("%d", ele);
    node *ans = binary_search(start, ele);
    if (ans == NULL)
        printf("Element not found");
    else
        printf("Element found");
    return 0;
}