#include <stdio.h>
int main()
{
    int m,n,i,j,t=0;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&m,&n);
    int a[100][100];
    printf("Enter the element of the matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    if(m<n){
    for(i=0;i<m;i++){
        for(j=i+1;j<n;j++){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }   }
    else{
    for(i=0;i<m;i++){
        for(j=0;j<i;j++){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }   }
    printf("The matrix after transpose is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d\n",a[i][j]);
    }
    return 0;
}