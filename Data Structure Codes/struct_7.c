#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks_chem;
    int marks_phy;
    int marks_maths;
}record[5];
int main()
{
    int i,maths[5]={0,0,0,0,0},phy[5]={0,0,0,0,0},chem[5]={0,0,0,0,0};
    for(i=0;i<5;i++){
        printf("Enter the name of the student\n");
       scanf("\n%s",&record[i].name);
        printf("Enter the roll number of the student\n");
        scanf("%d",&record[i].roll);
        printf("Enter the marks in Maths, Physics and Chemistry\n");
        scanf("%d%d%d",&record[i].marks_maths,&record[i].marks_phy,&record[i].marks_chem);
        maths[i]+=record[i].marks_maths;
        chem[i]+=record[i].marks_chem;
        phy[i]+=record[i].marks_phy;
    }
    float per[5];
    for(i=0;i<5;i++){
        per[i]=(maths[i]+phy[i]+chem[i])/3;

    }
    for(i=0;i<5;i++){
        printf("The name of roll number %d is ",record[i].roll);
        puts(record[i].name);
        printf("And has obtained %0.2f\n",per[i]);
        }
    
    return 0;
}