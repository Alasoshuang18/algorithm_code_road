#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N = 1e5+10;
int a[N],Pre[N];
int main()
{
    int n,k,maxx = 0;
    cin>>n>>k;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
    }
    for(int i = k;i <= n;i++)//����� a[i-k+1] �� a[i] �ĺ�
    {
        //cin>>k;
        maxx = max(maxx,Pre[i]-Pre[i-k]);
    }
    cout<<maxx<<'\n';

    return 0;
}