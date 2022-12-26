#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *l;
    struct node *r;
} binary_tree;
binary_tree *p = NULL;
binary_tree *getnode(int data)
{
    binary_tree *p;
    p = (binary_tree *)malloc(sizeof(binary_tree));
    p->data = data;
    p->l = NULL;
    p->r = NULL;
};
void preorder(binary_tree *p)
{
    if (p != NULL)
    {

        printf("%d\n", p->data);
        preorder(p->l);
        preorder(p->r);
    }
}
void postorder(binary_tree *n1)
{
    if (n1 != NULL)
    {
        postorder(n1->l);
        postorder(n1->r);

        printf("%d\n", n1->data);
    }
}
void inorder(binary_tree *n1)
{
    if (n1 != NULL)
    {
        inorder(n1->l);
        printf("%d\n", n1->data);
        inorder(n1->r);
    }
}
int countnode(binary_tree *p)
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
int leaf_count(binary_tree *node)
{
    if (node == NULL)
        return 0;
    if (node->l == NULL && node->r == NULL)
        return 1;
    else
        return leaf_count(node->l) + leaf_count(node->r);
}