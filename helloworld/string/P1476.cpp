// 分别对删除，插入，替换做操作
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char op[4];
    cin >> op;
    cin.ignore();
    if (op[0] == 'D')
    {
        string a;
        getline(cin, a);
        int x = s.find(a);
        if (x != -1)
        {
            s.erase(x, 1);
            // x = s.find(a, x); // 一定要注意：这里是从你删除的位置继续往下找
        }
        else
        {
            cout << "Not exist" << "\n";
            return 0;
        }
        // cout<<s<<"\n";
    }
    else if (op[0] == 'I')
    {
        string a1, a2;
        // getline(cin, a1);
        // cin.ignore();
        // getline(cin, a2);
        // cin.ignore();
        cin >> a1 >> a2;
        // cin.ignore();
        int y = s.rfind(a1); // 需要查找最后一个出现的值
        if (y != -1)
        {
            s.insert(y, 1, a2[0]); // 这里要十分注意，返回的是值a2[0]
        }
        else
        {
            cout << "Not exist" << "\n";
            return 0;
        }
    }
    else if (op[0] == 'R')
    {
        bool flag = 0;
        // string b1,b2;
        // getline(cin,b1);
        // getline(cin,b2);
        char b1, b2;
        cin >> b1 >> b2;
        int p = s.find(b1);
        while (p != -1)
        {
            s.replace(p, 1, 1, b2);
            p = s.find(b1, p + 1);
            flag = 1;
        }
        if (!flag)
        {
            cout << "Not exist" << "\n";
            return 0;
        }
    }
    cout << s << "\n";
    return 0;
}