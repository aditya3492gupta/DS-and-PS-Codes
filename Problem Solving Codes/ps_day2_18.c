#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter the string\n");
    gets(s);
    int i;
    int n=strlen(s);
    printf("The pattern is\n");
    for(i=0;i<n;i++)
    {
        puts(s);
        s[i]='.';
        
    }
    return 0;
}