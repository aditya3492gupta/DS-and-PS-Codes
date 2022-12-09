#include <stdio.h>

int main(){
	int n;
    printf("Enter the number of rows\n");
	scanf("%d",&n); 
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n)
			printf("*");
			else if(i-1+j==n)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}             	                  // Reading 
}
