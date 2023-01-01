#include "stack.h"
int main()
{
    stack_type s;
    initial(&s);
    int n, u, o, temp;
    char ch;
    do
    {
        printf("Choose one of the following option\n1.Push\n2.Pop\n3.Display\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            o = overflow(&s);
            if (o == 0)
            {
                printf("The stack has overflowed\n");
                break;
            }
            else
                push(&s);
            break;
        case 2:
            u = underflow(&s);
            if (u == 0)
            {
                printf("The stack has underflowed\n");
                break;
            }
            else
                temp = pop(&s);
            printf("The element %d is popped from stack\n", temp);
            break;
        case 3:
            display(&s);
            break;
        }
        printf("To continue press y\nIf not press n\n");
        scanf("\n%c", &ch);
    } while (ch == 'y');
    return 0;
}
