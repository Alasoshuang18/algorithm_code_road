#include<iostream>
#include<algorithm>
using namespace std;
const int N = 3e3+10;
int a[N],Pre[N];
int main()
{
    int n,m,minn = 0x3f3f3f3f;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
    }
    for(int i = m;i <= n;i++)
    {
        minn = min(minn,Pre[i]-Pre[i-m]);
    }
    cout<<minn<<'\n';

    return 0;
}