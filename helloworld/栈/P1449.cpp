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
    int tmp = 0; // tmp�����ݴ������
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            tmp = tmp * 10 + (s[i] - '0');
        else if (s[i] == '@')
            break;
        else if (s[i] == '.') // ������
        {

            stk.push(tmp);
            // ��Ҫ����tmp��������һ��������������
            tmp = 0;
        }
        else
        {
            // ע���������˳�򣺺󵯳����ǵ�һ�����������ȵ������ǵڶ���������
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