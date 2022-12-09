#include <stdio.h>
int pal(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    pal(n);
    return 0;
}
int pal(int n)
{
    int i,a,sum=0;
    for(i=n;i>0;i/=10)
    {
        a=i%10;
        sum=sum*10+a;
    }
    if(sum==n)
    printf("Palindrome");
    else
    printf("Not Palindrome");

}