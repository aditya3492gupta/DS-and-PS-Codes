#include <stdio.h>
struct sum
{
    int hr;
    int min;
    int sec;  
}time[2];

int main()
{
    int i;
    for(i=0;i<2;i++){
    printf("Enter the time in Hr:Min:Sec\n");
    scanf("%d%d%d",&time[i].hr,&time[i].min,&time[i].sec);}
    int sum_hr=time[0].hr+time[1].hr;
    int sum_min=time[0].min+time[1].min;
    int sum_sec=time[0].sec+time[1].sec;
    if(sum_sec>=60){
        if(sum_min>=60)
            printf("The total time is %d:%d:%d",sum_hr+1,(sum_min%60)+1,sum_sec%60);
        else
            printf("The total time is %d:%d:%d",sum_hr,sum_min+1,(sum_sec%60)+1);
    }
    else{
            if(sum_min>=60)
                printf("The total time is %d:%d:%d",sum_hr+1,sum_min%60,sum_sec);
            else
              printf("The total time is %d:%d:%d",sum_hr,sum_min,sum_sec);  
          }

    return 0;
}