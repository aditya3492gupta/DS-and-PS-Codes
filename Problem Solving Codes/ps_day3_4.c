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
    float sum=0;
    int i,d=-1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
        sum=sum+(pow(x,i)/fact)*d;
        d=-d;
        
    }
    printf("The sum is %f",1+sum);
    return 0;
}