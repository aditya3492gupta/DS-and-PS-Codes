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
            if(j<=row+1-i || j>row+i-2)
            printf(" %d ",k);
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}