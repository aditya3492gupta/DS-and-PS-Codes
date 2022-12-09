#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    int sum=0,fact;
    int i,j;
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        
        sum=sum+fact/i;
    }
    printf("The sum is %d",sum);
    return 0;
}