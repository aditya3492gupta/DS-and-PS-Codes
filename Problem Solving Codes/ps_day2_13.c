#include <stdio.h>
int pat(int n){
    if(n>0)
    {
        printf("%d ",n);
        pat(n-5);
    }
    printf("%d ",n);
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    pat(n);
    return 0;
}