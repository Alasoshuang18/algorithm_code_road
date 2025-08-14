// 我一直把题目想复杂了，最近做string类的题目有点多
// 于是我就想着把c的下标找出来，然后替换，但是却只能替换一个,不太能一次性换完
// 没想到直接找 字符串中的字符与c匹配，匹配成功即可替换成 d
// 但是这种方法只会超时，所以我们需要优化
// 我们可以采用记录要替换的字母，后期再把它替换成别的字母的方式
#include <iostream>
#include <cstring>
using namespace std;
const int N = 26;
int a[N];
int main()
{
    int n, q;
    string s;
    cin >> n >> s;
    for (int i = 0; i < N; i++)
    {
        a[i] = i; // a[i]表示第i种字母被替换成的字母是什么字母
    }
    cin >> q;
    while (q--)
    {
        char c, d;//c要转换成d
        cin >> c >> d;
        int o = c - 'a';
        int p = d - 'a';
        for (int i = 0; i < 26; i++)
        {
            if (a[i] == o)
            {
                a[i] = p;
            }
        }
    }
        for (int i = 0; i < n; i++)
        {
            //int x = a[s[i] - 'a' + 1];
            cout << (char)(a[s[i] - 'a'] + 'a');
        }
    return 0;
}