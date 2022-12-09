#include <stdio.h>
int main()
{
    int i,j,row;
    printf("Enter numberc of rows\n");
    scanf("%d",&row);
    for(i=row;i>0;i--)
    {
        for(j=i;j<=row;j++)
        {
            printf("%c ",'A'-1+j);
        }
        printf("\n");
    }
    return 0;
}