#include <stdio.h>
#include <math.h>
int digit(int k,int ans){
    int a,count=0;
    while(ans>0 && count<k){
        a=ans%10;
        count++;
        if(count==k)
        return a;
        ans/=10;
    }
}
int main()
{
    int a,b;
    printf("Enter the base and exponent\n");
    scanf("%d%d",&a,&b);
    int ans=pow(a,b);
    int k;
    printf("Enter the kth digit from right\n");
    scanf("%d",&k);
    digit(k,ans);
    printf("The kth digit from right is %d",digit(k,ans));
    return 0;
}