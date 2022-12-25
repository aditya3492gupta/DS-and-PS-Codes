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
node *reverse(node *start)
{
    node *prev = NULL, *current = start, *next = NULL;
    while (current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int middle(node *start)
{
    node *slow = start, *fast = start;
    while (fast != NULL && fast->link != NULL)
    {
        fast = fast->link->link;
        slow = slow->link;
    }
    int mid = slow->data;
    return mid;
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
int count_node(node *start)
{
    int num = 0;
    node *temp = start;
    while (temp != NULL)
    {
        temp = temp->link;
        num++;
    }
    return num;
}
void k_node_last(node *start, int ele)
{
    node *temp = start;
    int count = count_node(start), i;

    if (count < ele)
        printf("Enter valid value");
    temp = start;
    for (i = 1; i < count - ele + 1; i++)
        temp = temp->link;
    printf("The %dth node from last is %d", ele, temp->data);
}
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void pair_swap(node *start)
{
    node *temp = start;
    while (temp != NULL && temp->link != NULL)
    {
        swap(&temp->data, &temp->link->data);
        temp = temp->link->link;
    }
}
int palindrome(node *start, node *rev)
{
    node *temp = start;
    node *temp1 = rev;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == temp1->data)
            count++;
        temp = temp->link;
        temp1 = temp1->link;
    }
    return count;
}
