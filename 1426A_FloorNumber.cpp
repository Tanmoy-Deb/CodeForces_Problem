#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n, x;
    for(int i=0; i<t; i++)
    {
        cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else
            cout<<""<<((n-3)/x)+2<<endl;
    }
    return 0;
}