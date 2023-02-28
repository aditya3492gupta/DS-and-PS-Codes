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
int is_empty(node *top)
{
    if (top == NULL)
        return 1;
    return 0;
}
int is_full(node *top)
{
    node *p = getnode();
    if (p == NULL)
        return 1;
    return 0;
}
node *push_stack(node *top, int ele)
{
    if (is_full(top))
        printf("Overflow\n");
    else
    {
        node *p = getnode();
        p->data = ele;
        p->link = top;
        top = p;
        return top;
    }
}
int pop_stack(node **top)
{
    if (is_empty(*top))
        printf("Underflow\n");
    else
    {
        node *n = (*top);
        (*top) = (*top)->link;
        int x = n->data;
        free(n);
        return x;
    }
}
void traversal(node *top)
{
    while (top != NULL)
    {
        printf("%d->", top->data);
        top = top->link;
    }
    printf("NULL\n");
}
int main()
{
    node *top = NULL;
    int n, ele;
    printf("Enter number of element to be pushed\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter element\n");
        scanf("%d", &ele);
        top = push_stack(top, ele);
        printf("The elements in the stack is\n");
        traversal(top);
    }
    int x = pop_stack(&top);
    printf("The popped element is %d\n", x);
    traversal(top);
    return 0;
}