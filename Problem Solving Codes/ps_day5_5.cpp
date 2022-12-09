#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int a[n],i,d=1;
    for(i=1;i<=n;i++){
        if(i%2!=0){
        a[d]=i;
        d++;
        }
    }
    for(i=n;i>0;i--){
        if(i%2==0){
            a[d]=i;
            d++;
        }
    }
    cout<<"The array is"<<endl;
    for(i=1;i<=n;i++)
    cout<<a[i]<<"\t"<<endl;
}