#include<iostream>
using namespace std;
const int N = 2e5+10;
int a[N],prefix[N];
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m,l,r;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        prefix[i] = prefix[i-1] + a[i];
    }
    while(m--)
    {
        cin>>l>>r;
        cout<<prefix[r] - prefix[l-1]<<'\n';
    }
    return 0;
}