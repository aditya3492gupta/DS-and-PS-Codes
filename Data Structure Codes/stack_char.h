#include <stdio.h>
#include <stdlib.h>
#define size 100
typedef struct
{
    char a[size];
    int top;
} stack_type;
void initial(stack_type *v)
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
void push(stack_type *v, char ch)
{
    v->top++;
    v->a[v->top] = ch;
}
void pop(stack_type *v)
{
    int temp = v->a[v->top];
    v->top--;
}
void display(stack_type *v)
{
    printf("The elements in the stack are\n");
    while (v->top != -1)
    {
        printf("%c\n", v->a[v->top]);
        v->top--;
    }
}
void stack_top(stack_type *v)
{
    printf("The top element of the stack is %c", v->a[v->top]);
}