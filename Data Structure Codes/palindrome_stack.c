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
    int n,a,ori;
    printf("Enter a number\n");
    scanf("%d",&n);
    ori=n;
    while(n>0){
        a=n%10;
        push(&s,a);
        n=n/10;
    }
    int t=underflow(&s);
    int dis,num=0;
    while(t!=0){
        dis=pop(&s);
        num=num*10+dis;
        t=underflow(&s);
    }
    if(ori==num)
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}