#include <stdio.h>
int str(char a[]){
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char a[100];
    printf("Enter the array\n");
    gets(a);
    int d=str(a);
    printf("The length of the string is %d",d);
    return 0;
}