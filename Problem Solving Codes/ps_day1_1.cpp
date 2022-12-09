#include <iostream>
using namespace std;
int main()
{
    int bs,hra,da,pf,ts;
    char grade;
    cout<<"Enter the basic salary"<<endl;
    cin>>bs;
    cout<<"Enter the grade"<<endl;
    cin>>grade;
    pf=0.11*bs;
    hra=0.2*bs;
    da=0.5*bs;
    ts=bs+hra+da-pf;
    if(grade=='A')
    
       cout<<"The total salary is "<<ts+1700;
    
    else if(grade=='B')
    
        cout<<"The total salary is "<<ts+1500;
    else if(grade=='C')
    cout<<"The total salary is "<<ts+1300;

    return 0;
}