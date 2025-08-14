// 思路：忘记看题了，题目中有些不能直接用-5代替
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] >= 'F' && s[i] <= 'Z')
            {
                s[i] = s[i] - 5;
            }else
            {
                s[i] = s[i] + ('V' - 'A');
            }
        }
        
    }
    cout<<s;
    return 0;
}