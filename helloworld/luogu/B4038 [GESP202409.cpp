#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 1e4 + 10;
int a[N], Prefix[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t, n;
    // bool flag = 0; 他需要进行重新初始化，每一次都是新的开始
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            Prefix[i] = Prefix[i - 1] + a[i];
        }
        bool flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (Prefix[i] == Prefix[n] - Prefix[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}