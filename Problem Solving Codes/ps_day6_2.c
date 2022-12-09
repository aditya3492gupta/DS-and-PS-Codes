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
    
    for(i=0;i<m;i++){
        for(j=i;j<n;j++){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for(i=0;i<n/2;i++){
        for(j=0;j<m;j++){
            t=a[i][j];
            a[i][j]=a[i][m-j-1];
            a[i][m-j-1]=t;
        }
    }
    printf("The matrix after rotating 90 degree is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
    }
    return 0;
}