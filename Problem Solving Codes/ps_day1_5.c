#include<stdio.h>
int main()
{
    int F, Date, Year, Month;
    printf("Enter Date:Month:Year\n");
    scanf("%d%d%d",&Date,&Month,&Year);
    if(Month==1 || Month==2)
    {
        Year--; Month=Month+12;
    }
 
     F=Date+2*Month+(3*(Month+1)/5)+Year+(Year/4)-(Year/100)+(Year/400)+2;

     if(F%7== 0)
     printf("Saturday");

     if(F%7== 1)
     printf("Sunday");

     if(F%7== 2)
     printf("Monday");

     if(F%7== 3)
     printf("Tuesday");

     if(F%7== 4)
     printf("Wednesday");

     if(F%7== 5)
     printf("Thursday");

     if(F%7== 6)
     printf("Friday");
     return 0;
}