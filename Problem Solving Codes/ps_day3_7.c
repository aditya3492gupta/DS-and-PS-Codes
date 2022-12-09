#include <stdio.h>
int sumfact(int n){
    double sum=0;
    int i,d=1;
    for(i=1;i<=n;i++)
    {
        if(i==1){
        sum+=d*(1);
        d=-d;}
        else{
         sum+=d*((double)i/((i+1)));
        d=-d;}

    }
    printf("The sum is %lf",sum);
    return 0;
}
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    sumfact(n);
    return 0;
}