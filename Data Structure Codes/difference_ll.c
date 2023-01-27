#include "linked_list.h"
node *difference_list(node *list1, node *list2)
{
    node *p1 = list1, *p2 = list2;
    node *list3 = NULL;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            list3 = insert_end_num(list3, p1->data);
            p1 = p1->link;
        }
        else
        {
            if (p2->data < p1->data)
                p2 = p2->link;
            else
            {
                p1 = p1->link;
                p2 = p2->link;
            }
        }
    }
    while (p1 != NULL)
    {
        list3 = insert_end_num(list3, p1->data);
        p1 = p1->link;
    }
    return list3;
}
int main()
{
    int n, m;
    node *list_A, *list_B, *list_C = NULL;
    printf("Enter number of elements in linked list A\n");
    scanf("%d", &n);
    printf("Enter number of nodes in linked list B\n");
    scanf("%d", &m);
    printf("Enter nodes in linked list A\n");
    list_A = create(n);
    display(list_A);
    printf("Enter nodes in linked list B\n");
    list_B = create(m);
    display(list_B);
    list_C = difference_list(list_A, list_B);
    printf("List A and B after difference\n");
    display(list_C);
    return 0;
}