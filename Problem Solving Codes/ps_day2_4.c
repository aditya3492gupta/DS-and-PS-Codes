#include <stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=2*i-1;j++)
        {
            printf("%c ",'A'-1+j);
        }
        printf("\n");
    }
    return 0;
}