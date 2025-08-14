#include <iostream>
#include <stack>
using namespace std;
const int N = 51;
char a[N];
stack<int> stk;
int main()
{
    string s;
    int sum = 0;
    // int a, b, c, d, e, f, g, h;
    int tmp = 0; // tmp用来暂存操作数
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            tmp = tmp * 10 + (s[i] - '0');
        else if (s[i] == '@')
            break;
        else if (s[i] == '.') // 操作数
        {

            stk.push(tmp);
            // 需要重置tmp，进行下一个操作数的推入
            tmp = 0;
        }
        else
        {
            // 注意操作数的顺序：后弹出的是第一个操作数，先弹出的是第二个操作数
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            switch (s[i])
            {
            case '+':
                // a = stk.top();
                // stk.pop();
                // b = stk.top();
                // stk.pop();
                sum = b + a;
                // stk.push(sum);
                /* code */
                break;
            case '-':
                // c = stk.top();
                // stk.pop();
                // d = stk.top();
                sum = b - a;
                // stk.push(sum);
                break;

            case '*':
                // e = stk.top();
                // stk.pop();
                // f = stk.top();
                sum = b * a;
                // stk.push(sum);
                break;

            case '/':
                // g = stk.top();
                // stk.pop();
                // h = stk.top();
                sum = b / a;
                // stk.push(sum);
                break;
            }
            stk.push(sum);
        }
        
    }
    cout << stk.top() << "\n";
    return 0;
}