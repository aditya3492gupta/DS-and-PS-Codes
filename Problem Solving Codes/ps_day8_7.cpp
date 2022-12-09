#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i;
    cout<<"All prime factors of "<<n<<" are\n";
    for(i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<endl;
    }
    return 0;
}