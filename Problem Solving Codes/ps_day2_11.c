#include <stdio.h>
int main()
{
    int i,j,row,k;
    printf("Enter the number of row\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        k=0;
       
        for(j=1;j<=2*row-1;j++)
        {
             j<=row?k++:k--;
            if(j<=i || j>=2*row-i)
            printf(" %d ",k);
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}