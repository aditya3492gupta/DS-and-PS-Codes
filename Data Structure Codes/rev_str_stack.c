#include <stdio.h>
#define size 1000
typedef struct
{
    char a[size];
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
void push(stack_type *v, char a)
{
    v->top++;
    v->a[v->top] = a;
}
char pop(stack_type *v)
{
    char temp = v->a[v->top];
    v->top--;
    return temp;
}
int main()
{
    stack_type s;
    initial(&s);
    char a[100], dis;
    printf("Enter a string\n");
    gets(a);
    int o = overflow(&s);
    int i = 0;
    while (a[i] != '\0' && o != 0)
    {
        push(&s, a[i]);
        o = overflow(&s);
        i++;
    }
    int u = underflow(&s);
    while (u != 0)
    {
        dis = pop(&s);
        printf("%c", dis);
        u = underflow(&s);
    }

    return 0;
}