#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) // 字符串的长度范围是 0 - n-1
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
            // 计算完了后，得求另外一个“改变后是 VK”的量
            s[i] = 'P', s[i + 1] = 'P';
            i++; // 进行下一个的判断
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != 'P' && s[i] == s[i + 1])
        {
            cnt++;
            cout << cnt;
            return 0;
        }
    }
    cout << cnt << '\n';

    return 0;
}