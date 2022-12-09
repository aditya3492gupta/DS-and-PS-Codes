#include <stdio.h>
int cmp(char a[], char b[])
{
    int i,count=0;
    for(i=0;a[i]!='\0' && b[i]!='\0';i++){
        if(a[i]!=b[i])
        count++;
    }
    return count;
}
int main()
{
    char a[100],b[100];
    printf("Enter the first string\n");
    gets(a);
    printf("Enter the second string\n");
    gets(b);
    int n=cmp(a,b);
    if(n==0)
    printf("Two strings are equal");
    else
    printf("Two string are not equal");

    return 0;
}