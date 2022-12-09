#include <stdio.h>
int main()
{
    int a[100],n;
    printf("Enter the number of elements of an array\n");
    scanf("%d",&n);
    printf("Enter the element of an array\n");
    int i,t;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("The array after reversal is\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}