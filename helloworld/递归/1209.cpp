// �ݹ��������������������ĺ�
// ���Լ��
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
    n--; // ��һ���õ���
    while (n--)
    {
        scanf("%d/%d", &a, &b);
        p = a * q + b * p;
        q = b * q;
        int tmp = gcd(p, q);
        p /= tmp;
        q /= tmp;
    }
    // ����p,q��ֵ

    if (q == 1)cout << p << "\n";
    else printf("%d/%d", p, q);
    return 0;
}