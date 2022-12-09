#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter the string\n");
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        a[i]=a[i]+32;
        else if(a[i]>=97 && a[i]<=122)
        a[i]=a[i]-32;
    }
    puts(a);
    return 0;
}