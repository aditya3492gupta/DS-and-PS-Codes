#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the coefficient of the quadratic equation\n";
    cin>>a>>b>>c;
    int d=b*b-4*a*c;
    double root=-b+sqrt(d)/(2*a);
    double root1=-b-sqrt(d)/(2*a);
    double root2=-b/(2*a);
    if(d>0)
        cout<<"The roots are real and distinct"<<endl<<root<<" "<<root1;
    else if(d<0)
        cout<<"The roots are imaginery";
    else
        cout<<"Roots are equal"<<endl<<root2;
    return 0;
}