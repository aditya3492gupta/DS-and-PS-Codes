#include <stdio.h>
#define size 10
typedef struct
{
    int a[size];
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
void push(stack_type *v)
{
    int ele;
    printf("Enter the element\n");
    scanf("%d", &ele);
    v->top++;
    v->a[v->top] = ele;
    printf("%d push to stack\n", ele);
}
void push_ele(stack_type *v, int ele)
{
    v->top++;
    v->a[v->top] = ele;
}
int pop(stack_type *v)
{
    int temp = v->a[v->top];
    v->top--;
    return temp;
}
void display(stack_type *v)
{
    printf("The elements in the stack are\n");
    while (v->top != -1)
    {
        printf("%d\n", v->a[v->top]);
        v->top--;
    }
}
int stack_top(stack_type *v)
{
    return v->a[v->top];
}
int minimum(stack_type *v)
{
    int min = stack_top(v), temp;
    while (underflow(v) != 0)
    {
        temp = pop(v);
        if (min > temp)
            min = temp;
    }
    return min;
}
// void sort(stack_type *v)
// {
//     stack_type *temp_stack;
//     int temp;
//     while (v->top != 0)
//     {
//         temp = v->a[v->top];
//         pop(v);
//         while (temp_stack->top != -1 && temp_stack->top > temp){

//         }
//     }
// }