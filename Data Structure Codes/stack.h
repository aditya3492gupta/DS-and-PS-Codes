#include <stdio.h>
#define size 10
typedef struct
{
    int a[size];
    int top;
} stack_type;
int initial(stack_type *v)
{
    v->top = -1;
}
int overflow(stack_type *v)
{
    if (v->top == size - 1)
        return 0;
    else
        return 1;
}
int underflow(stack_type *v)
{
    if (v->top == -1)
        return 0;
    else
        return 1;
}
int push(stack_type *v)
{
    int ele;
    printf("Enter the element\n");
    scanf("%d", &ele);
    v->top++;
    v->a[v->top] = ele;
    printf("%d push to stack\n", ele);
}
int pop(stack_type *v)
{
    int temp = v->a[v->top];
    v->top--;
    return temp;
}
int display(stack_type *v)
{
    printf("The elements in the stack are\n");
    while (v->top != -1)
    {
        printf("%d\n", v->a[v->top]);
        v->top--;
    }
}