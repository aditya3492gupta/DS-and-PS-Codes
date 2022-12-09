#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
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
void push(stack_type *v, int ch)
{
    v->top++;
    v->a[v->top] = ch;
}
int pop(stack_type *v)
{
    int temp = v->a[v->top];
    v->top--;
    return temp;
}
int main()
{
    stack_type s;
    initial(&s);
    char ch[100], ori[100];
    printf("Enter the postfix expression\n");
    scanf("\n%s", &ch);
    strcpy(ori, ch);
    strrev(ch);
    int i, num1, num2, num3, num;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] != '+' && ch[i] != '-' && ch[i] != '*' && ch[i] != '/')
        {
            num = ch[i] - 48;
            push(&s, num);
        }
        else
        {
            num1 = pop(&s);
            num2 = pop(&s);
            switch (ch[i])
            {
            case '+':
                num3 = num1 + num2;
                break;
            case '-':
                num3 = num1 - num2;
                break;
            case '*':
                num3 = num1 * num2;
                break;
            case '/':
                num3 = num1 / num2;
                break;
            }
            push(&s, num3);
        }
    }
    printf("The value of the postfix expression %s is %d", ori, pop(&s));
    return 0;
}
