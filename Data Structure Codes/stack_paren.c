#include "stack_char.h"
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
    u = underflow(&s);
    if (u == 0)
        printf("The expression is balanced");
    else
        printf("The expression is not balanced");
    return 0;
}
