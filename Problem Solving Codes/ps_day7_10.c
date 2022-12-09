#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the string\n");
    gets(a);
    int n=strlen(a);
    int i,b[122];
    for(i=0;i<122;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    b[a[i]-'a']++;
    printf("The frequency of each character is\n");
    for(i=0;i<n;i++){
        if(b[a[i]-'a']!=0)
    printf("%c comes %d times\n",a[i],b[a[i]-'a']);
    b[a[i]-'a']=0;}
    return 0;
}