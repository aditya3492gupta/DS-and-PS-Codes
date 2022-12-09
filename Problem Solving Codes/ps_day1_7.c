#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature\n");
    scanf("%d",&temp);
    if(temp<0)
    printf("Freezing temperature");
    else if(temp>=0&&temp<10)
    printf("Very cold weather");
    else if(temp>=10&&temp<20)
    printf("cold weather");
    else if(temp>=20&&temp<30)
    printf("Normal in temperature");
    else if(temp>=30&&temp<40)
    printf("Its hot");
    else
    printf("Its very hot");
    return 0;
}