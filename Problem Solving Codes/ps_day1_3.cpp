#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if(ch=='a' or ch=='A' or ch=='e' or ch=='E' or ch=='i' or ch=='I' or ch=='o' or ch=='O' or ch=='u' or ch=='U')
    cout<<"Vowel";
    else 
    cout<<"Consonant";
    return 0;
}