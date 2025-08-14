#include <iostream>
#include <stack>
using namespace std;
stack<char> stk;
bool check(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '[')
            stk.push(str[i]);
        else if (str[i] == ')')
        {
            if (!stk.empty() && stk.top() == '(')
                stk.pop();
            else return false;
        }
        else if (str[i] == ']')
        {
            if (!stk.empty() && stk.top() == '[')
                stk.pop();
            else return false;
        }
    }
   if(stk.empty())return true;
   else return false;
}
int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "OK" << "\n";
    else
        cout << "Wrong" << "\n";

    return 0;
}