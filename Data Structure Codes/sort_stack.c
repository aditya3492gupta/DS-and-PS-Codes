#include "stack.h"
int main()
{
    stack_type s1, s2;
    initial(&s1);
    initial(&s2);
    int n, i, temp, num;
    printf("Enter number of elements in the stack\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter element in stack\n");
        scanf("%d", &num);
        push_ele(&s1, num);
    }
    while (underflow(&s1) != 0)
    {
        temp = pop(&s1);
        while (underflow(&s2) != 0 && stack_top(&s2) < temp)
        {
            push_ele(&s1, pop(&s2));
        }
        push_ele(&s2, temp);
    }
    printf("The stack after sorting is\n");
    display(&s2);
    return 0;
}