#include <stdio.h>
void insert(int a[],int n){
    int i,key,j;
    for(i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("Array after sorting is\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
int main()
{
    int n,ele,a[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    insert(a,n);
    return 0;
}