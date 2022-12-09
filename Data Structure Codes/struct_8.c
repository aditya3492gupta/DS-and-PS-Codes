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
    int sub_real=complex[0].real-complex[1].real;
    int mul_real=complex[0].real*complex[1].real;
    int sum_imag=complex[0].imag+complex[1].imag;
    int sub_imag=complex[0].imag-complex[1].imag;
    int mul_imag=complex[0].imag*complex[1].imag;
    printf("The addition is %d + %di\n",sum_real,sum_imag);
    printf("The subtraction is %d + %di\n",sub_real,sub_imag);
    printf("The multiplication is %d + %di\n",mul_real,mul_imag);
    return 0;
}