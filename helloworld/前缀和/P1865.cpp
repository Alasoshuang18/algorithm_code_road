#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e6+10;
int a[N];
bool is_Prime(int x)
{
    if(x <= 1)return false;
    for(int i = 2;i * i <= x;i++)
    {
        if(x % i == 0)return false;
    }
    return true;
}
int main()
{
    int n,m;cin>>n>>m;
    for(int i = 1;i <= m;i++)
    {
            a[i] += a[i-1];
            if(is_Prime(i))a[i] ++;
        }
    for(int i = 1;i <= n;i++)
    {
        int cnt = 0;
        int l,r;cin>>l>>r;
        if(l < 0 || r > m)
        {
            cout<<"Crossing the line"<<"\n";
            continue;
        }
        //±©Á¦Ëã·¨
    //     for(int j = l;j <= r;j++)
    //     {
    //         if(is_Prime(j))cnt++;
    //     }
    //     cout<<cnt<<"\n";
    // }
    cout<<a[r]-a[l-1]<<"\n";
    }
    return 0;
}