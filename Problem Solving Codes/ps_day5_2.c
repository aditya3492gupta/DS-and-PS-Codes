#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("The greatest element is %d",max);
    return 0;
}