#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    if(a>b)
        cout<<b<<" "<<(a-b)/2<<endl;
    else if(a<b)
        cout<<a<<" "<<(b-a)/2<<endl;
    else
       cout<<a<<" "<<0<<endl; 
    return 0;
}