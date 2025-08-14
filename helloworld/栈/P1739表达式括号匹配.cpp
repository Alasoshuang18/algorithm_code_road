#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
stack<char> stk;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (!stk.empty() && s[i] == '@')break;
        if (s[i] == '(')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if(!stk.empty())
            {
                stk.pop();
            }else // ×¢ÒâÓÒÀ¨ºÅ»¹Òª¿¼ÂÇÊÇ·ñÔÚ×óÀ¨ºÅÓÒ±ß
                {
                    cout << "NO" << "\n";
                    return 0;
                }  
            
            }
        }  
    if (stk.empty())
    {
        cout << "YES" << "\n";
    }
    else
        cout << "NO" << "\n";

    return 0;
}