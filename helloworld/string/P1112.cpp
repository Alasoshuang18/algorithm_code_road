#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s, s1, s2;
    getline(cin, s);
    getline(cin, s1);
    getline(cin, s2);
    int len = s.find(s1);
    int len2 = s1.size();
    int len3 = s2.size();
    while (len != -1)
    {
        s.replace(len, len2, s2);
        len = s.find(s1, len + len3); // 注意，这里是从替换后的位置继续往下找
    }
    cout << s;
    return 0;
}