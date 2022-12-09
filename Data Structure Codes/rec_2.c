#include <stdio.h>
int power(int a,int n){
    if(n==0)
    return 1;
    else if(n==1)
    return a;
    else if(n>1)
    return a*power(a,n-1);
}
int main()
{
    int a,n;
    printf("Enter base and the exponent\n");
    scanf("%d%d",&a,&n);
    power(a,n);
    printf("%d raised to %d is %d",a,n,power(a,n));
    return 0;
}
