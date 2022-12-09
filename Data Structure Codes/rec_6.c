#include <stdio.h>
void hanoi(int n,char a,char b,char c){
    if(n!=0){
        hanoi(n-1,a,c,b);
        printf("Move disk %d from %c to %c\n",n,a,c);
        hanoi(n-1,b,a,c);

    }
}
int main()
{
    int n;
    char a='A',b='B',c='C';
    printf("Enter number of disk\n");
    scanf("%d",&n);
    hanoi(n,a,b,c);
    printf("\n");
    return 0;
}