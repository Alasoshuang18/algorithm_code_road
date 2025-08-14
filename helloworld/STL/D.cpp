#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            // 判断首位字符:如果是第一个字符，或者前一个字符是空格
            if (i == 0 || s[i - 1] == ' ')
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = toupper(s[i]);
                }
        }
        cout << s << "\n";
    }

    return 0;
}