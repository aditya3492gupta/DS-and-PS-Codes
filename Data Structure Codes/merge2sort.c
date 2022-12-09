#include <stdio.h>
int main()
{
    int n,m,i;
    printf("Enter the number of elements of first array\n");
    scanf("%d",&n);
    printf("Enter the number of elements of second array\n");
    scanf("%d",&m);
    printf("Enter the element of first array\n");
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int t=m+n;
    int c[t];
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        c[i+n]=b[i];
    }
    printf("The merged array is\n");
    // sort after this
    for(i=0;i<t;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}