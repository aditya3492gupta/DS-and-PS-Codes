#include <stdio.h>
void lcm(int n1, int n2){
    int i;
	int max= n1>n2?n1:n2;
    for(i=max;i>0;i++)
    {
        if(i%n1==0&&i%n2==0)
        {
            printf("The LCM of %d and %d is %d",n1,n2,i);
            break;
        }
    }
}
int main()
{
	int a,b;
	printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    lcm(a,b);
	return 0;
}
