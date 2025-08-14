// À¨ºÅÆ¥ÅäÓÃÕ»×ö
#include <iostream>
#include <stack>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
const int N = 110;
stack<int> stk;
char vis[N];
string s;
void check(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            stk.push(i);
        else if (s[i] == ')')
        {
            if (!stk.empty())
                stk.pop();
            else
            {
                vis[i] = '?';
            }
        }
    }
    while (!stk.empty())
    {
        vis[stk.top()] = '$';
        stk.pop();
    }
}
int main()
{
    while (cin >> s)
    {
        memset(vis, 32, sizeof(vis));
        check(s);
        cout << s << "\n";
        for (int i = 0; i < s.size(); i++)
        {
            cout << vis[i];
        }
        cout << "\n";
    }
    return 0;
}
