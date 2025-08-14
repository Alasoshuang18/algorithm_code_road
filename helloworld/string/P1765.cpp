#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int cnt = 0;
    getline(cin,a);
    for(int i = 0;i < a.size();i++)
    {
        if(a[i] == ' '||a[i] == 'a' || a[i] == 'd' || a[i] == 'g' || a[i] == 'j' || a[i] == 'm' || a[i] == 'p' || a[i] == 't' || a[i] == 'w')
        {
            cnt += 1;
        }
        if(a[i] == 'b'||a[i] == 'e' || a[i] == 'h' || a[i] == 'k' || a[i] == 'n' || a[i] == 'q' || a[i] == 'u' || a[i] == 'x')
        {
            cnt += 2;
        }
        if(a[i] == 'c'||a[i] == 'f' || a[i] == 'i' || a[i] == 'l' || a[i] == 'o' || a[i] == 'r' || a[i] == 'v' || a[i] == 'y')
        {
            cnt += 3;
        }
        if(a[i] == 's' || a[i] == 'z')
        {
            cnt += 4;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}