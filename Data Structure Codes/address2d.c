#include <stdio.h>
int main()
{
    int i,j,u1,l1,u2,l2;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&i,&j);
    int a[i][j];
    char ch;
    printf("Enter R for row major and C for column major\n");
    scanf("%c",&ch);
    printf("Enter the lower bound\n");
    scanf("%d%d",&l1,&u1);
    printf("Enter the upper bound\n");
    scanf("%d%d",&l2,&u2);
    int x,y,add;
    printf("Enter the position of the element\n");
    scanf("%d%d",&x,&y);
    int n=i*j,*base=a[l1][u1];
    if(ch=='R'){
        add=base+((x-l1)*(u2-l2+1)+(y-l1))*n;
    }
    else if(ch=='C'){
        add=base+((y-l1)*(u1-l1+1)+(i-l1))*n;
    }
    printf("The address of tje element is %d",add);
    return 0;
}