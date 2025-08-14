// 没有考虑到的地方
// 数字入栈，非数字做判断
#include <iostream>
#include <stack>
#include <string>
using namespace std;
using ll = long long;
stack<ll> stk;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            ll sum = 0;
            while (i < s.size() && isdigit(s[i]))
            {
                sum = sum * 10 + (s[i] - '0');
                i++;
            }
            stk.push(sum);
            i--; // 因为 for 循环会自动加 1，所以这里需要减 1
        }
        else if (s[i] == '+')
        {
            if (!stk.empty())
            {
                ll a = stk.top();
                stk.pop();
                ll b = stk.top();
                stk.pop();
                stk.push(b + a);
                // cout<<sum1<<"\n";
            }
        }
        else if (s[i] == '-')
        {
            if (!stk.empty())
            {
                ll c = stk.top();
                stk.pop();
                ll d = stk.top();
                stk.pop();
                stk.push(d - c); // 一定要注意减法的位置
            }
        }
        else if (s[i] == '*')
        {
            if (!stk.empty())
            {
                ll e = stk.top();
                stk.pop();
                ll f = stk.top();
                stk.pop();
                stk.push(e * f);
            }
        }
        else if (s[i] == '/')
        {
            if (!stk.empty())
            {
                ll g = stk.top();
                stk.pop();
                ll h = stk.top();
                stk.pop();
                stk.push(h / g);
            }
        }
        else if (s[i] == '@')
            break;
    }
    if (!stk.empty())
    {
        cout << stk.top() << "\n";
    }
    return 0;
}