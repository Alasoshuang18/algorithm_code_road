#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str, a;
    int q, x, y;
    char op;
    cin >> q;
    cin >> str;
    for (int i = 0; i < q; i++)
    {

        // cin >> str;
        cin >> op;
        if (op == '1')
        {
            cin >> a;
            str += a;
            cout << str << '\n';
        }
        else if (op == '2')
        {
            cin >> x >> y;
            str = str.substr(x, y);
            cout << str << '\n';
        }
        else if (op == '3')
        {
            cin >> x >> a;
            str = str.insert(x, a);
            cout << str << '\n';
        }
        else if (op == '4')
        {
            cin >> a;
            x = str.find(a);
            cout << x << '\n';
        }
    }

    return 0;
}