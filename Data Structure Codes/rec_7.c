#include <stdio.h>
int sum=0,rem;
int reverse(int num){
  if(num>0){
    rem=num%10;
    sum=sum*10+rem;
    reverse(num/10);
  }
  else
    return sum;
}
int main(){
  int num;
  printf("Enter any number:");
  scanf("%d",&num);
  int n=reverse(num);
  printf("The reverse of entered number is :%d",n);
  return 0;
}