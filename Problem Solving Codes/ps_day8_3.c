#include <stdio.h>
int sum(int n){
    int i,a,sum1=0;
    if(n<10)
    return n;
    else{
        for(i=n;i>0;i/=10)
        {
            a=i%10;
            sum1+=a;
        }
        return sum(sum1);
    }
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum(n);
    printf("The sum is %d",sum(n));
    return 0;
}