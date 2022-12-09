#include <stdio.h>
#include <string.h>
void rev(char a[],int n){
    int i;
    char t;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    puts(a);
}
int main()
{
    int n;
    char a[100];
    printf("Enter the string\n");
    gets(a);
    n=strlen(a);
    rev(a,n);
    return 0;
}