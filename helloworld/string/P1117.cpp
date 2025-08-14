#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    // 刚开始的时候不太会排0那个地方
    string s;
    cin >> s;
    // char t;//用来交换s[0],s[i]
    sort(s.begin(), s.end());
    if (s[0] == '0')
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                // t = s[0];
                // s[0] = s[i];
                // s[i] = t;
                swap(s[0], s[i]);
                break;
            }
        }
    }
    cout << s << "\n";
    return 0;
}