#include "linked_list.h"
#include <math.h>
int merge_point(node *start1, node *start2)
{
    node *p = start1, *q = start2;
    int count1 = count_node(p), count2 = count_node(q), diff;
    p = start1, q = start2;
    diff = abs(count1 - count2);
    for (int i = 0; i < diff; i++)
    {
        if (start1 == NULL)
            return -1;
        start1 = start1->link;
    }

    while (start1 != NULL && start2 != NULL)
    {
        if (start1 == start2)
            return start1->data;
        start1 = start1->link;
        start2 = start2->link;
    }

    return -1;
}
int main()
{
    node *start1, *start2;
    int n1, n2, point;
    printf("Enter number of nodes in linked list A and B\n");
    scanf("%d%d", &n1, &n2);
    printf("Enter element in the list\n");
    start1 = create(n1);
    display(start1);
    printf("Enter element in the list\n");
    start2 = create(n2);
    display(start2);
    point = merge_point(start1, start2);
    if (point)
        printf("Merging point is %d", point);
    else
        printf("No merge point");
    return 0;
}