// 递归的作用拿来化简分数最后的和
// 最大公约数
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int a, b, c, d, n;
    cin >> n;
    scanf("%d/%d", &a, &b);
    int p = a, q = b;
    n--; // 第一次用掉了
    while (n--)
    {
        scanf("%d/%d", &a, &b);
        p = a * q + b * p;
        q = b * q;
        int tmp = gcd(p, q);
        p /= tmp;
        q /= tmp;
    }
    // 更新p,q的值

    if (q == 1)cout << p << "\n";
    else printf("%d/%d", p, q);
    return 0;
}