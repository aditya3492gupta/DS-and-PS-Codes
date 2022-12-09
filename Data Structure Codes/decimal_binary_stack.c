#include <stdio.h>
#define size 1000
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
int push(stack_type *v,int a)
{
    v->top++;
    v->a[v->top] = a;
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
    int n,a;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0){
        a=n%2;
        push(&s,a);
        n=n/2;
    }
    printf("The binary number is\n");
    int t=underflow(&s);
    int dis;
    while(t!=0){
        dis=pop(&s);
        printf("%d",dis);
        t=underflow(&s);
    }
    return 0;
}