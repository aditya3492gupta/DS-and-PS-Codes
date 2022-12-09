#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    int marks[6];
}record;

int main()
{
    
    int i;
    printf("Enter the name of the student\n");
    scanf("\n%s",&record.name);
    printf("Enter the roll number of the student\n");
    scanf("%d",&record.roll);
    printf("Enter the marks of the student\n");
    for(i=0;i<6;i++){
        scanf("%d",&record.marks[i]);
        }
    
    int max1,max2,max3,max4;
    max1=record.marks[0];
    max2=record.marks[0];
    max3=record.marks[0];
    max4=record.marks[0];
    for(i=0;i<6;i++){
    if(max1<record.marks[i])
    max1=record.marks[i];
    }
    for(i=0;i<6;i++){
        if(max1>record.marks[i] && max2<record.marks[i])
        max2=record.marks[i];
    }
    for(i=0;i<6;i++){
        if(max1>record.marks[i] && max2>record.marks[i] && max3<record.marks[i])
        max3=record.marks[i];
    }
    for(i=0;i<6;i++){
        if(max1>record.marks[i] && max2<record.marks[i] && max3>record.marks[i] && max4<record.marks[i])
        max4=record.marks[i];
    }
    float per;
    per = (max1+max2+max3+max4)/4;
    if(per>=95)
    printf("Roll number %d is eligible",record.roll);
    else
    printf("Roll number %d is not eligible",record.roll);
    return 0;
}