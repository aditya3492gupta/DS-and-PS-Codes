#include <stdio.h>
int prime(int start, int end)
{
    int i,j,c;
    printf("The prime numbers are\n");
    for(i=start;i<=end;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        printf("%d\n",i);
    }
}
int main()
{
    int start,end;
    printf("Enter the starting and the end point\n");
    scanf("%d%d",&start,&end);
    prime(start,end);
    return 0;
}