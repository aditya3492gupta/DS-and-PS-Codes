#include <stdio.h>
int main()
{
    int a[100],i,n,ele,f,l,mid,c=0;
    printf("Enter the number of elemnets\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    f=0;
    l=n-1;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(ele==a[mid])
        {
            c++;
            break;
        }
        else if(ele>a[mid])
        f=mid+1;
        else if(ele<a[mid])
        l=mid-1;
    }
    if(c==1)
    printf("Element found");
    else
    printf("Element not found");
    return 0;
}