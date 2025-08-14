#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    char so;
    cin >> so;
    for (so = 'a'; so <= 'z'; so++)
    {
        s += so;
        if (so == 'm' || so == 'z')
        {
            s += '\n';
        }
    }
    for (so = 'z'; so >= 'a'; so--)
    {
        s += so;
        if (so == 'n')
        {
            s += '\n';
        }
    }
    cout << s;
    return 0;
}