#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 1e6 + 10;
int a[N];
int main()
{
    int n, m, k, cnt = 0, minyi = 0;
    cin >> n >> m >> k;
    int l = m;
    while (m--)
    {
        // һ��Ҫע�������cntҪ���㰡����Ϊÿִ����һ�죬��Ҫ����ͳ����һ�����������
        cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == k)
                cnt++;
        }
        if (cnt >= (n + 1) / 2)
        {
            minyi++;
        }
    }
    if (minyi >= (l + 1) / 2)
    {
        cout << "YES" << "\n";
    }
    else
        cout << "NO" << "\n";
    return 0;
}