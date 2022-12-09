#include <stdio.h>
#include <string.h>
void con(char a[], char b[])
{
    int i,n;
    i=strlen(a);
    for(n=0;b[n]!='\0';n++){
        a[i+n]=b[n];
    }
    a[i+n]='\0';
    printf("String after concatination is\n");
    puts(a);
}
int main()
{
    char a[100],b[100];
    printf("Enter the first string\n");
    gets(a);
    printf("Enter the second string\n");
    gets(b);
    con(a,b);
    return 0;
}