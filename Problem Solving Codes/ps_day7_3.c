#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string\n");
    char a[100];
    gets(a);
    char b[100];
    strcpy(b,a);
    strrev(b);
    int n=0;
    n=strcmp(a,b);
    if(n==0)
    printf("Palindrome\n");
    else
    printf("Not Palindrome\n");
    return 0;
}