#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    printf("Enter the range\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    int fact=1;
    float sum=1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+pow(x,i)/fact;
        
    }
    printf("The sum is %f",sum);
    return 0;
}