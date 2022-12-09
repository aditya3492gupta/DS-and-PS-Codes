#include <stdio.h>
#include <stdlib.h>
#define size 100
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
int main()
{
    stack_type s;
    initial(&s);
    int u;
    char ch[100];
    printf("Enter the arithmetic expression\n");
    scanf("\n%s", &ch);
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == '(')
            push(&s, ch[i]);
        else if (ch[i] == ')')
        {
            u = underflow(&s);
            if (u == 0)
            {
                printf("The expression is not balanced");
                exit(0);
            }
            pop(&s);
        }
    }
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == '[')
            push(&s, ch[i]);
        else if (ch[i] == ']')
        {
            u = underflow(&s);
            if (u == 0)
            {
                printf("The expression is not balanced");
                exit(0);
            }
            pop(&s);
        }
    }
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == '{')
            push(&s, ch[i]);
        else if (ch[i] == '}')
        {
            u = underflow(&s);
            if (u == 0)
            {
                printf("The expression is not balanced");
                exit(0);
            }
            pop(&s);
        }
    }
    u = underflow(&s);
    if (u == 0)
        printf("The expression is balanced");
    else
        printf("The expression is not balanced");
    return 0;
}
