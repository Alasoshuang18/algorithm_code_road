// 看了一眼题目没啥思路，但是观看题解后直呼大神
// 就是笃定了一个范围内有单词中的那个字符存在，那么就会出现这个单词
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;                // cnt1统计男生,cnt2统计女生
    for (int i = 0; i < s.size() - 2; i++) // 这里需要size()-2的目的是防止越界，因为我下面开了个i+2
    {
        if (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y')
            cnt1++;
    }
    for (int i = 0; i < s.size() - 3; i++)
    {
        if (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l')
            cnt2++;
    }

    cout << cnt1 << "\n"
         << cnt2 << "\n";
    return 0;
}