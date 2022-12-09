#include <stdio.h>
int power(int a,int b){
    if(a==0)
    return 0;
    else if(b==0)
    return 1;
    else
    return (a*power(a,b-1));
}
int main()
{
    int a,b;
    printf("Enter the base and exponent\n");
    scanf("%d%d",&a,&b);
    power(a,b);
    printf("%d raised to %d is %d",a,b,power(a,b));
    return 0;
}