#include <iostream>
using namespace std;
string s;
int f(int k)
{
    char c;
    if (k != 0)
    {
        c = k % 2 + '0';
        s = c + s;
        f(k / 2);
    }
}
int main()
{
    int n;
    cin >> n;
    s = "";
    if(n == 0)
    {
        cout<<"0\n";
    }else 
    {
        f(n);
        cout<<s<<"\n";
    }
    return 0;
}