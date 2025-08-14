#include <iostream>
#include <cstring>
using namespace std;
const int N = 27;
char a[N];
int main()
{
    int n, len = strlen(a);
    cin >> n;
    cin >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] + n <= 'z')
        {
            a[i] = a[i] + n;
        }
        else
        {
            //% 26 的作用就是确保结果在 0 到 25 之间，从而把超出 26 个字母的移动转换成合法的字母位置
            a[i] = 'a' + (a[i] - 'a' + n) % 26; // 想象一下 n = 1 是'z',那么-25就是'a'，如何得到'a'呢,直接 1 - 26 = -25即可
        }
    }
    cout << a;
    return 0;
}