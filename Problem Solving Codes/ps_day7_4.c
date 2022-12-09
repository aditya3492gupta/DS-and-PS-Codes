#include <stdio.h>
int main()
{ 
    printf("Enter the sentence\n");
    char a[1000];
    gets(a);
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ')
        count++;
    }
    printf("the number of words is %d",count+1);
    return 0;
}