#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int age;
    int marks[5];
}record[5];
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        printf("Enter the name of the student\n");
       scanf("\n%s",&record[i].name);
        printf("Enter the roll number of the student\n");
        scanf("%d",&record[i].roll);
        printf("Enter the age of the student\n");
        scanf("%d",&record[i].age);
        printf("Enter the marks of the student\n");
        for(j=0;j<5;j++){
            scanf("%d",&record[i].marks[j]);
        }
    }
    for(i=0;i<5;i++){
        printf("The name of roll number %d is ",record[i].roll);
        puts(record[i].name);
        printf("And has obtained following marks in exams\t");
        for(j=0;j<5;j++){
            printf("%d\t",record[i].marks[j]);
        }
        printf("\n");
    }
    return 0;
}