#include <stdio.h>
#include <math.h>
int arm(int start,int end)
{
    int i,j,c,a,sum;
    for(i=start;i<=end;i++)
    {
        c=0;
        for(j=i;j>0;j/=10)
        c++;
        sum=0;
        for(j=i;j>0;j/=10)
        {
            a=j%10;
            sum=sum+pow(a,c);
        }
        if(sum==i)
        printf("%d\n",sum);
        
    }
}
int main()
{
    int start,end;
    printf("Enter the starting and the ending point\n");
    scanf("%d%d",&start,&end);
    arm(start,end);
    return 0;
}