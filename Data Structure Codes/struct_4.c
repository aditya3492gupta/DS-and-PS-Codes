#include <stdio.h>
struct sum
{
    int feet;
    int inch;   
}distance[2];

int main()
{
    int i;
    for(i=0;i<2;i++){
    printf("Enter the distance in feet and inches\n");
    scanf("%d%d",&distance[i].feet,&distance[i].inch);}
    int sum_feet=distance[0].feet+distance[1].feet;
    int sum_inch=distance[0].inch+distance[1].inch;
    if(sum_inch%12!=0)
        printf("The total distance is %d feet and %d inches",sum_feet+1,sum_inch%12);
    else
        printf("The total distance is %d feet and %d inches",sum_feet,sum_inch);
    return 0;
}