#include<bits/stdc++.h>
using namespace std;
const int N = 5e3+10;
const int M = 5e5+10;
int a[N];
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    bitset<M> bs;//表示有M个二进制数据
    bs[0] = 1;
    for(int i = 1;i <= n;i++)
    {
        bs |= (bs << a[i]);
    }
    cout<<bs.count()<<"\n";

    return 0;
}