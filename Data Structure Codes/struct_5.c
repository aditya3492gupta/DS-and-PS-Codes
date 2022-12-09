#include <stdio.h>
struct sum
{
    int real;
    int imag;   
}complex[2];

int main()
{
    int i;
    for(i=0;i<2;i++){
    printf("Enter the complex number\n");
    scanf("%d%d",&complex[i].real,&complex[i].imag);}
    int sum_real=complex[0].real+complex[1].real;
    int sum_imag=complex[0].imag+complex[1].imag;
    printf("The addition is %d + %di",sum_real,sum_imag);
    return 0;
}