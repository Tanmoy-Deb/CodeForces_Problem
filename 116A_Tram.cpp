#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = sum - a + b;
        if (max < sum)
        {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}