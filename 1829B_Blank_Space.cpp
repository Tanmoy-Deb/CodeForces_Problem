#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        int cnt = 0, mx=0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            
            if(x==0)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            mx = max(cnt, mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}