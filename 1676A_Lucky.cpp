#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for (int i=0; i<t; i++)
    {
        cin>>s;
        if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}