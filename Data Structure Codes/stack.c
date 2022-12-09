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
    printf("%d push to stack\n",ele);
}
int pop(stack_type *v)
{
    int temp = v->a[v->top];
    v->top--;
    return temp;
}
int display(stack_type *v){
    printf("The top of stack element is %d\n",v->a[v->top]);
}
int main()
{
    stack_type s;
    initial(&s);
    int n, u, o,temp;
    char ch;
    do
    {
        printf("Choose one of the following option\n1.Push\n2.Pop\n3.Display\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            o = overflow(&s);
            if (o == 0){
                printf("The stack has overflowed\n");
                break;}
            else
                push(&s);
            break;
        case 2:
            u = underflow(&s);
            if (u == 0){
            printf("The stack has underflowed\n");
                break;}
            else
                temp=pop(&s);
                printf("The element %d is popped from stack\n",temp);
            break;
        case 3:
            display(&s);
            break;
        }
        printf("To continue press y\nIf not press n\n");
        scanf("\n%c",&ch);
    }
    while (ch == 'y');
    return 0;
}
