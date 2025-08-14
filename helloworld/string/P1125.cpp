#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
bool isPrime(int n)
{
    //提前排除 sum <= 1 的情况，确保不会错误地判断 0 或 1 为质数。
    if(n <= 1)return false;//这个特判条件很重要！！！！！
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
const int N = 26;
char a[N];
int s[N]; // a表示原序列,s表示桶记录字母次数
int main()
{
    int minn = 1e9, maxx = 0, sum = 0;
    cin >> a;
    int len = strlen(a);
    memset(s, 0, sizeof(s)); // 一定要初始化数组！！

    for (int i = 0; i < len; i++)
    {
        // int t = i;//替死鬼上场
        s[a[i] - 'a']++; // 用 -'a'的方式讲范围圈定在0-25之间，好进行累加
    }
    for (int i = 0; i < 26; i++)
    {
        if (s[i] > 0)
        {
            minn = min(minn, s[i]);
            maxx = max(maxx, s[i]);
        }
    }

    sum = maxx - minn;
    if (isPrime(sum))
    {
        cout << "Lucky Word" << '\n'<< sum;
    }
    else
    {
        cout << "No Answer" << '\n'<< 0;
    }

    return 0;
}