#include <stdio.h>
int main()
{
    int i,n,l;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the lower bound of the array\n");
    scanf("%d",&l);
    int a[n];
    int *base=&a[l];
    printf("Enter the position of element\n");
    scanf("%d",&i);
    int add=base+(i-l)*n;
    printf("The address is %d",add);
    return 0;
}