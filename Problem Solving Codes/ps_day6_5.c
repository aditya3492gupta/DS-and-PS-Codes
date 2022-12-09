#include <stdio.h>
int main()
{
    int a[100][100],m,n;
    printf("Enter the number of element of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix\n");
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int row=0,col=0;
    while(row<m && col<n){
        for(i=col;i<n;i++)
        printf("%d\t",a[row][i]);
        row++;
        for (i = row; i<m; i++)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;
        if ( row < m)
        {
            for (i = n-1; i >= col; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            row--;
        }
        if (col < n)
        {
            for (i = row-1; i >= row; --i)
            {
                printf("%d ", a[i][col]);
            }
            col++;    
        }        
    }
    return 0;
}