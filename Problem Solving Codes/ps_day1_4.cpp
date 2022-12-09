#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter an year"<<endl;
    cin>>year;
    if(year%4==0 and year%100!=0 or year%400==0)
    cout<<"Leap year";
    else
    cout<<"Not a leap year";
    return 0;
}