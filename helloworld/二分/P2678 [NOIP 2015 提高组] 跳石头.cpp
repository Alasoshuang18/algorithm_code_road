#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5e4 + 10;
int d[N];
int L, n, m;
bool check(int x)
{
    int start1 = 0, cnt = 0;         // start1��ʾ��ʼλ��,cnt��ʾŲ�ߵ�ʯͷ����
    for (int i = 1; i <= n + 1; i++) // ����ÿһ��ʯͷ
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
    for (int i = 1; i <= n; i++) // n����ʯֻ���������ڲ�����ʯ����
    {
        cin >> d[i];
    }
    d[n + 1] = L; //ע�����һ����n+2��ʯͷ(�����յ�) 
    int ans = erfenyou(0, L);
    cout << ans << "\n";
    return 0;
}