#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    long long ans = a[0]-1;
    for (int i = 1; i < m; i++)
    {
        if(a[i-1]<=a[i])
        {
            ans += a[i]-a[i-1];
        }
        else
        {
            ans += n-a[i-1]+a[i];
        }
    }
    cout<<ans<<endl;
    
    return 0;
}