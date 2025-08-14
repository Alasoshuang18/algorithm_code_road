#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5e4 + 10;
int d[N];
int L, n, m;
bool check(int x)
{
    int start1 = 0, cnt = 0;         // start1表示起始位置,cnt表示挪走的石头数量
    for (int i = 1; i <= n + 1; i++) // 遍历每一块石头
    {
        if (d[i] - d[start1] >= x)
        {
            start1 = i;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt <= m)
        return true;
    else
        return false;
}
int erfenyou(int l, int r)
{
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    return r;
}
int main()
{
    cin >> L >> n >> m;
    for (int i = 1; i <= n; i++) // n块岩石只不过是在内部的岩石而已
    {
        cin >> d[i];
    }
    d[n + 1] = L; //注意这个一共有n+2块石头(起点和终点) 
    int ans = erfenyou(0, L);
    cout << ans << "\n";
    return 0;
}