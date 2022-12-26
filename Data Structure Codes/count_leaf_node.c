#include "binary_tree.h"
int main()
{
    binary_tree *n1, *n2, *n3, *n4;
    n1 = getnode(2);
    n2 = getnode(4);
    n3 = getnode(5);
    n4 = getnode(6);
    n1->l = n2;
    n1->r = n3;
    n3->l = n4;
    int c = leaf_count(n1);
    printf("%d", c);
    return 0;
}