#include <bits/stdc++.h>
using namespace std;
const int MOD = 100003;
const int N = 100010;
int rever[N];
int n, k;
int f(int i)
{
    int ans = 0;
    if (i == 0)
        return 1; // ���浽����һ�ַ�ʽ�����ǲ���
    if (i < 0)
        return 0; // ���̨��Ϊ������û�з�ʽ����
    if (rever[i] != -1)
        return rever[i];
    // if(i == 1)return 1;
    // if(i == 2)return 2;
    //��������ʵ��û�п�����ȫ
    for (int j = 1; j <= k; j++)
    {
        ans = (ans + f(i - j)) % MOD;
    }
    rever[i] = ans;
    return ans;
}
int main()
{
    // int n,k;
    cin >> n >> k;
    memset(rever, -1, sizeof(rever));
    cout << f(n) << "\n";

    return 0;
}