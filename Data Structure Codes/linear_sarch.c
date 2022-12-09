#include <stdio.h>
int main()
{
    int a[100],i,n,ele,c=0;
    printf("Enter the number of element\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            c++;
            printf("Position=%d\n",i+1);
        }
    }
    if(c>0)
        printf("Element found %d times",c);
    else
        printf("Element not found");
    return 0;
}
