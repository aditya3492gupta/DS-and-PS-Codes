#include "stack.h"
int main()
{
    stack_type s;
    initial(&s);
    int n, i;
    printf("Enter number of elements in the stack\n");
    scanf("%d", &n);
    // printf("Enter the elements in stack\n");
    for (i = 1; i <= n; i++)
    {
        // scanf("%d", &num);
        if (overflow(&s) == 0)
            break;
        else
            push(&s);
    }
    printf("The minimum element in the stack is %d", minimum(&s));
    return 0;
}