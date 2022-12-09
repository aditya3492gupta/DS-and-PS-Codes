#include <stdio.h>


int main() 
{

    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

      int i,j,a,b,t;
      t=2*n-1;
      a=0;
      b=t-1;
      int m[t][t];
      while(n>0)
      {
          
          for(i=a;i<=b;i++)
          {
              for(j=a;j<=b;j++)
              {
                  if(i==a||i==b||j==a||j==b)
                    m[i][j]=n;
                  
                  
              }
          }
          ++a;
          --b;
          --n;
      }
      printf("The pattern is\n");
      for(i=0;i<t;i++)
      {
          for(j=0;j<t;j++)
          
              printf("%d ",m[i][j]);
              
                  
          
          printf("\n");
      }
      
    return 0;
}
