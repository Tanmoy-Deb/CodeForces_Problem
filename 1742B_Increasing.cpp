#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                cnt++;
            }
        }
        if (cnt == (n - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}