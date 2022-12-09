#include <stdio.h>
struct bank{
    char name[100];
    int ac_no;
    int bal;
};
void dis_name(struct bank details[],int n){
    int i;
    printf("The name of the account holders having less than $200 are\n");
    for(i=0;i<n;i++){
        if(details[i].bal<200)
        puts(details[i].name);
    }
}
void dis_inc(struct bank details[],int n){
    int i;
    for(i=0;i<n;i++){
        if(details[i].bal>1000){
        details[i].bal+=100;
        printf("The new balance %d account is %d\n",details[i].ac_no,details[i].bal);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of account holders\n");
    scanf("%d",&n);
    struct bank details[n];
    int i;
    for(i=0;i<n;i++){
        printf("Enter the name of the account holder\n");
        scanf("\n%s",&details[i].name);
        printf("Enter the account number\n");
        scanf("%d",&details[i].ac_no);
        printf("Enter the balance of the account\n");
        scanf("%d",&details[i].bal);
    }
    dis_name(details,n);
    dis_inc(details,n);
    return 0;
}