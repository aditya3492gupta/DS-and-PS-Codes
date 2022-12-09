#include <stdio.h>
void count(int a[],int n){
    int max=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    int out[n];
    int cout[max];
    for(i=0;i<max;i++)
    cout[i]=0;
    for(i=0;i<n;i++)
    ++cout[a[i]];
    for(i=0;i<max;i++)
    cout[i]=cout[i]+cout[i-1];
    for(i=0;i<n;i++)
    out[--cout[a[i]]]=a[i];
    for(i=0;i<n;i++)
    a[i]=out[i];
}
int main()
{
    int n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    count(a,n);
    printf("The array after sorting is\n"); 
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}