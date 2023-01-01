#include "doubly_ll.h"
int main()
{
    doubly_node *start;
    start = NULL;
    char ch;
    int n, i;
    do
    {
        printf("\nEnter 1 to Create\n2 to Enter at Front\n3 to Delete from Front\n4 to Display");
        printf("\n5 to Insert at End\n6 to Delete from End\n7 to Insert at Key Value\n8 to Delete a Key Value\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter number of nodes\n");
            scanf("%d", &i);
            start = create(i);
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