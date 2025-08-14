#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 5e5 + 10;
int w[N];
int n, a, b;
bool check(int x)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (w[i] - a * x <= 0)
            continue;
        // ��������Ϊ������Ȼ��ɣ�Ȼ�����ú�ɻ��������ܺ�ɾͽ�����һ������
        int time = ceil((w[i] - a * x) * 1.0 / b); // ע��:�˴����г�ΪС���Ŀ���
        sum += time;
    }
    if (sum <= x)
        return true;
    else
        return false;
}
int erfenzuo(int l, int r)
{
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }

    return l;
}
int main()
{
    cin >> n >> a >> b;
    int l = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
        r = max(r, w[i]);
    }
    r = r / a + 1; // �����ʱ��,+1����Ϊ������С��,�Ӷ���С�����ķ�Χ
    int ans = erfenzuo(l, r);
    cout << ans << "\n";
    return 0;
}