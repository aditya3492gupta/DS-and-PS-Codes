#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *l;
    struct node *r;
};
struct node *p = NULL;
struct node *getnode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->l = NULL;
    p->r = NULL;
};
void preorder(struct node *p)
{
    if (p != NULL)
    {

        printf("%d\n", p->data);
        preorder(p->l);
        preorder(p->r);
    }
}
void postorder(struct node *n1)
{
    if (n1 != NULL)
    {
        postorder(n1->l);
        postorder(n1->r);

        printf("%d\n", n1->data);
    }
}
void inorder(struct node *n1)
{
    if (n1 != NULL)
    {
        inorder(n1->l);
        printf("%d\n", n1->data);
        inorder(n1->r);
    }
}
int countnode(struct node *p)
{
    int c = 1;
    if (p == NULL)
        return 0;
    else
    {
        c += countnode(p->l);
        c += countnode(p->r);
        return c;
    }
}
int main()
{
    struct node *n1, *n2, *n3, *n4;
    n1 = getnode(2);
    n2 = getnode(4);
    n3 = getnode(5);
    n4 = getnode(6);
    n1->l = n2;
    n1->r = n3;
    n3->l = n4;
    printf("Preorder Traversal\n");
    preorder(n1);
    printf("Postorder Traversal\n");
    postorder(n1);
    printf("Inorder Traversal\n");
    inorder(n1);
    int c = countnode(n1);
    printf("Number of Nodes in Tree are %d", c);
    return 0;
}