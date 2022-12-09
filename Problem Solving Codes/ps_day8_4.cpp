#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter an odd digit number"<<endl;
    cin>>n;
    int a=n,count=0;
    while(a>0){
        a/=10;
        count++;
    }
    for(i=n;i>0;i/=10){
         
    }
    return 0;
}