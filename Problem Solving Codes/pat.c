#include <stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=6-i && j<=4+i && k){
                printf("*");
                k=0;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}