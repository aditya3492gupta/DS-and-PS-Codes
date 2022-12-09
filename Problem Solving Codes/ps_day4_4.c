#include <stdio.h>
int per(int start,int end)
{    
    int i,j,sum;
    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            sum+=j;
        }
        if(sum==i)
        printf("%d\n",sum);
    }
    return 0;
}
int main()
{
    int start,end;
    printf("Enter the starting and ending point\n");
    scanf("%d%d",&start,&end);
    per(start,end);
    return 0;
}