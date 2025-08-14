#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 1e7 + 10;
ll a[N];
ll l, n, k;

// ����ڸ����ġ��տ�ָ����x�£��Ƿ����ͨ���������k��·����������
bool check(int x) {
    ll cnt = 0; // ��Ҫ�����·������
    for (int i = 1; i < n; i++) {
        // ����ÿ�ξ�����Ҫ�����·������
        cnt += (a[i + 1] - a[i] - 1) / x;
    }
    return cnt <= k; // �����Ҫ�����·������������k���򷵻�true
}

// ���ֲ�����С�ġ��տ�ָ����
int erfenzuo(ll left, ll right) {
    while (left < right) {
        ll mid = (left + right) >> 1;
        if (check(mid)) {
            right = mid; // ��������������������Ը�С�ġ��տ�ָ����
        } else {
            left = mid + 1; // ���򣬳��Ը���ġ��տ�ָ����
        }
    }
    return left; // ������С�ġ��տ�ָ����
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> l >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n); // ȷ��·��λ���ǵ�����

    ll left = 1, right = l; // ��ʼ�����ֲ��ҵķ�Χ
    int ans = erfenzuo(left, right); // ִ�ж��ֲ���
    cout << ans << "\n";
    return 0;
}