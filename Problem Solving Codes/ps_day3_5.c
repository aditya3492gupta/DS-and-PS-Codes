#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    printf("Enter the range\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    int fact;
    float sum=0;
    int i,j,d=1;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0){
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(pow(x,i)/fact)*d;
        d=-1*d;
        }
    }
    printf("The sum is %0.2f",sum);
    return 0;
}