#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=2*i-1;j++)
        {
            j<=i?k++:k--;
            printf("%d",k);
        }
        printf("\t");
    }
    return 0;
}