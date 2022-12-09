#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    int sum=0,fact=1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        fact*=i;
        sum=sum+fact;
    }
    printf("The sum is %d",sum);
    return 0;
}