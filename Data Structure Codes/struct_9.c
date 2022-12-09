#include <stdio.h>
typedef struct student{
    char name[100];
    int roll;
    int age;
    int marks[5];
    char add[1000];
}record;
void display_age(record v[],int n){
    int i;
    printf("The students with age 14 are\n");
    for(i=0;i<n;i++){
        if(v[i].age==14)
        puts(v[i].name);
    }
}
void even_roll(record v[],int n){
        int i;
        printf("The name of with even roll numbers are\n");
        for(i=0;i<n;i++){
            if(v[i].roll%2==0)
            puts(v[i].name);
        }
}
void roll(record v[],int n){
    int i;
    for(i-0;i<n;i++){
        puts(v[i].name);
    }
}
int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    record data[n];
    int i,j;
    for(i=0;i<n;i++){
        printf("Enter the name of the student\n");
       scanf("\n%s",&data[i].name);
        printf("Enter the roll number of the student\n");
        scanf("%d",&data[i].roll);
        printf("Enter the age of the student\n");
        scanf("%d",&data[i].age);
        printf("Enter the marks of the student\n");
        for(j=0;j<5;j++){
            scanf("%d",&data[i].marks[j]);
        }
        printf("Enter the address of the student\n");
        scanf("\n%s",&data[i].add);
    }
    display_age(data,n);
    even_roll(data,n);
    roll(data,n);
    return 0;
}