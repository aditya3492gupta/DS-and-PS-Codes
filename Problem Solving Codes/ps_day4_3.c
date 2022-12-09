#include <stdio.h>
int fac(int);
int main()

{
    int n,z;
    printf("Enter a number\n");
    scanf("%d",&n);
    z=fac(n);
    printf("the factorial is %d",z);
    return 0;
}
int fac(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return (n*fac(n-1));
}