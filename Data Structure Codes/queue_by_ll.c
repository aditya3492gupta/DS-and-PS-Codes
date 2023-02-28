#include "linked_list.h"
struct NODE *f = NULL, *r = NULL;
void enqueue(int val)
{
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = val;
        n->link = NULL;
        if (f == NULL)
            f = r = n;
        else
        {
            r->link = n;
            r = n;
        }
    }
}
int dequeue()
{
    int val = -1;
    node *ptr = f;
    if (f == NULL)
        printf("Queue is Empty\n");
    else
    {
        f = f->link;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
void linkedListTraversal(node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}