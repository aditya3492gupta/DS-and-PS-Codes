#include <stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the numbers of rows\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=2*row;j++)
        {
            if(j>=row-i+1 && j<=row+i-1)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}