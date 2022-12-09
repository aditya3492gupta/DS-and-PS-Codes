#include <stdio.h>
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int main()
{
	int a,b;
	printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    printf("The gcd of %d and %d is %d",a,b,gcd(a,b));
	return 0;
}
