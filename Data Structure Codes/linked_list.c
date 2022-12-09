#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct NODE
{
    int data;
    struct NODE *link;
} node;
node *getnode()
{
    node *n1;
    n1 = (node *)malloc(sizeof(node));
    n1->link = NULL;
    return n1;
}
node *create() // to create linked list
{
    node *NEW1, *temp, *NEW, *start;
    int element;
    char ans = 'y';
    printf("\n enter d element\n");
    scanf("%d", &element);
    NEW = getnode(); // 1st node
    start = NEW;
    temp = start;
    NEW->data = element;
    NEW->link = NULL;
    printf("\n do u want 2 enter mor elements:y or n");
    ans = getche();
    while (ans == 'y')
    {
        printf("\n enter d element\n");
        scanf("%d", &element);
        NEW1 = getnode();
        if (NEW1 == NULL)
        {
            printf("\n overflow");
        }
        else
        {
            temp->link = NEW1;
            NEW1->data = element;
            temp = NEW1;
            NEW1->link = NULL;
        }
        printf("\n do u want 2 enter mor elements:y or n");
        ans = getche();
    }
    getch();
    return start;
}
int main()
{
    node *start;
    start = NULL;
    char ch;
    int n;
    do
    {
        printf("Enter 1 to create\n2 to enter at front\n3 to delete at front\n");
        scanf("%d", &n);
        printf("Enter y to continue or else n to discontinue\n");
        scanf("\n%c", &ch);
        switch (n)
        {
        case 1:
        }
    } while (ch != 'n');
    return 0;
}