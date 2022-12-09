#include <stdio.h>
int mean(int a[5]){
    int sum=0;
    int i;
    for(i=0;i<5;i++)
    sum+=a[i];
    float  m=(float)sum/5;
    printf("Mean is %0.2f\n",m);
    return 0;
}
int median(int ar[5])
{
    int i,med,temp,j;
     for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5-1 ; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp        = ar[j];
                ar[j]    = ar[j+1];
                ar[j+1]  = temp;
            }
        }
    }


    med=ar[2];
   printf("Median is %d",med);
   return 0;
}
int main()
{
    int i,a[5];
    printf("Enter five numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    mean(a);
    median(a);
    return 0;
}