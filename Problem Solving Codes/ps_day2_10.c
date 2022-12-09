#include <stdio.h>
int main()
{
    int i,j,k=0,row;
    printf("enter the number of rows(odd)\n");
    scanf("%d",&row);
    int n=(row+1)/2;
    
    for(i=1;i<=row;i++)
    {
        i>n?k--:k++;
        for(j=1;j<=row;j++)
        {
            if(j>=k && j<=row-k+1)
            {
                printf(" * ");
            }
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}