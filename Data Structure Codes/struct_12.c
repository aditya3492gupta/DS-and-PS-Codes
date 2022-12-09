#include <stdio.h>
struct employee
{
    char name[100];
    int salary;
    int hour;
} emp_sal[10];

int main()
{
    int i;
    printf("Enter the name, salary and time of work in hours\n");
    for (i = 1; i <= 2; i++)
    {
        scanf("\n%s", &emp_sal[i].name);
        scanf("%d", &emp_sal[i].salary);
        scanf("%d", &emp_sal[i].hour);
    }
    for (i = 1; i <= 2; i++)
    {
        if (emp_sal[i].hour > 8)
            emp_sal[i].salary = emp_sal[i].salary + 50;
    }
    for (i = 1; i <= 2; i++)
    {
        printf("\n%s", emp_sal[i].name);
        printf("\n%d", emp_sal[i].salary);
    }
    return 0;
}