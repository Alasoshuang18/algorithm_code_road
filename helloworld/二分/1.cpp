#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 1e7 + 10;
ll a[N];
ll l, n, k;

// 检查在给定的“空旷指数”x下，是否可以通过插入最多k个路标满足条件
bool check(int x) {
    ll cnt = 0; // 需要插入的路标数量
    for (int i = 1; i < n; i++) {
        // 计算每段距离需要插入的路标数量
        cnt += (a[i + 1] - a[i] - 1) / x;
    }
    return cnt <= k; // 如果需要插入的路标数量不超过k，则返回true
}

// 二分查找最小的“空旷指数”
int erfenzuo(ll left, ll right) {
    while (left < right) {
        ll mid = (left + right) >> 1;
        if (check(mid)) {
            right = mid; // 如果可以满足条件，则尝试更小的“空旷指数”
        } else {
            left = mid + 1; // 否则，尝试更大的“空旷指数”
        }
    }
    return left; // 返回最小的“空旷指数”
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> l >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n); // 确保路标位置是递增的

    ll left = 1, right = l; // 初始化二分查找的范围
    int ans = erfenzuo(left, right); // 执行二分查找
    cout << ans << "\n";
    return 0;
}