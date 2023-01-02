#include <stdio.h>
#define size 20
int arr[size];
int top1 = -1;
int top2 = size;
void push1(int i)
{
    if (top1 < top2 - 1)
    {
        top1++;
        arr[top1] = i;
        printf("Value pushed to stack A\n");
    }
    else
        printf("Stack is full");
}
void push2(int i)
{
    if (top1 < top2 - 1)
    {
        top2--;
        arr[top2] = i;
        printf("Value pushed to stack B\n");
    }
    else
        printf("stack is full");
}
void pop1()
{
    if (top1 >= 0)
    {
        printf("The popped element is %d\n", arr[top1]);
        top1--;
    }
    else
        printf("Stack is empty\n");
}
void pop2()
{
    if (top2 < size)
    {
        printf("The popped element is %d\n", arr[top2]);
        top2++;
    }
    else
        printf("Stack is empty\n");
}
void display1()
{
    int i;
    for (i = top1; i >= 0; i--)
        printf("%d ", arr[i]);
}
void display2()
{
    int i;
    for (i = top2; i < size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int i, n, m;
    printf("Enter number of elements in stack A and stack B\n");
    scanf("%d%d", &m, &n);
    int a[n], b[m];
    printf("Enter the elements in stack A\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        push1(a[i]);
    }
    display1();
    printf("Enter the elements in stack B\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        push2(b[i]);
    }
    display2();
    int num1, num2;
    printf("Press 1 if you want to pop element from stack A\nPress 2 if not\n");
    scanf("%d", &num1);
    switch (num1)
    {
    case 1:
        pop1();
        break;
    case 2:
        break;
    }
    printf("Press 1 if you want to pop element from stack B\nPress 2 if not\n");
    scanf("%d", &num2);
    switch (num2)
    {
    case 1:
        pop2();
        break;
    case 2:
        break;
    }
    return 0;
}