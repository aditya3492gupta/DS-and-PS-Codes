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
void display(node *start)
{
    node *temp;
    temp = start;
    printf("\n");
    if (temp == NULL)
        printf("The list is empty \n");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("Null\n");
}
node *create()
{
    node *NEW1, *temp, *NEW, *start;
    int element;
    char ans = 'y';
    printf("Enter the element\n");
    scanf("%d", &element);
    NEW = getnode();
    start = NEW;
    temp = start;
    NEW->data = element;
    NEW->link = NULL;
    printf("Do you want to enter more elements:y or n\n");
    ans = getche();
    while (ans == 'y')
    {
        printf("\nEnter the element\n");
        scanf("%d", &element);
        NEW1 = getnode();
        if (NEW1 == NULL)
            printf("\nOverflow");
        else
        {
            temp->link = NEW1;
            NEW1->data = element;
            temp = NEW1;
            NEW1->link = NULL;
        }
        printf("Do you want to enter more elements:y or n\n");
        ans = getche();
    }
    getch();
    return start;
}
node *insert_front(node *start)
{
    node *New;
    int element;
    printf("Enter the element\n");
    scanf("%d", &element);
    New = (node *)malloc(sizeof(node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    New->data = element;
    New->link = start;
    start = New;
    return (start);
}
node *delete_front(node *start)
{
    node *temp;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    temp = start;
    start = temp->link;
    free(temp);
    return (start);
}
node *delete_end(node *start)
{
    node *temp, *ptr;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    ptr = start;
    while (ptr->link != NULL)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    temp->link = NULL;
    free(ptr);
    return (start);
}
node *insert_end(node *start)
{
    node *New, *temp;
    int element;
    printf("\nEnter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (node *)malloc(sizeof(node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    New->data = element;
    temp->link = New;
    New->link = NULL;
    return (start);
}
node *delete_key(node *start)
{
    node *temp, *ptr;
    int key;
    if (start == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    ptr = start;
    printf("\nEnter the key value you want to delete");
    display(start);
    scanf("%d", &key);
    temp = ptr;
    while (ptr->data != key)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    if (start->data == key)
        start = ptr->link;
    else
        temp->link = ptr->link;
    free(ptr);
    return (start);
}
node *insert_key(node *start)
{
    node *New, *temp;
    int element, key;
    printf("\nEnter the value after which you want to insert\n");
    display(start);
    scanf("%d", &key);
    printf("\n enter the element\n");
    scanf("%d", &element);
    temp = start;
    New = (node *)malloc(sizeof(node));
    if (New == NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    while (temp != NULL && temp->data != key)
    {
        temp = temp->link;
    }
    if (temp == NULL)
        printf("\nKey value not present in linked list");
    else
        New->data = element;
    New->link = temp->link;
    temp->link = New;
    return (start);
}
int main()
{
    node *start;
    start = NULL;
    char ch;
    int n;
    do
    {
        printf("\nEnter 1 to Create\n2 to Enter at Front\n3 to Delete from Front\n4 to Display");
        printf("\n5 to Insert at End\n6 to Delete from End\n7 to Insert at Key Value\n8 to Delete a Key Value\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            start = create();
            display(start);
            break;
        case 2:
            start = insert_front(start);
            display(start);
            break;
        case 3:
            start = delete_front(start);
            display(start);
            break;
        case 4:
            display(start);
            break;
        case 5:
            start = insert_end(start);
            display(start);
            break;
        case 6:
            start = delete_end(start);
            display(start);
            break;
        case 7:
            start = insert_key(start);
            display(start);
            break;
        case 8:
            start = delete_key(start);
            display(start);
            break;
        default:
            printf("Invalid Choice");
        }
        printf("Enter y to continue or else n to discontinue\n");
        ch = getche();
    } while (ch != 'n');
    return 0;
}