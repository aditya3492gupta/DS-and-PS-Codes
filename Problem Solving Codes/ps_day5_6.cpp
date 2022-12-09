#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int a[n],i;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    int t;
    if(n%2==0){
        for(i=0;i<n;i+=2){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        }
    }
    else{
        for(i=0;i<n-1;i+=2){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        }
    }
    cout<<"The array after swapping is"<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}