#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    }
    printf("The sum is %d",sum);

    return 0;
}