#include <stdio.h>
int pat(int n){
    int i,fact=1;
    float sum=0;
    for(i=1;i<=n;i++)
    {
        fact*=i;
        sum=sum+i/fact;
    }
        printf("The sum is %0.2f",sum);

}
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    pat(n);
    return 0;
}