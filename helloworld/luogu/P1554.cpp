#include<iostream>
using namespace std;
const int N = 15;
int a[N];
int main()
{
    int n,m;
    cin>>m>>n;
    for(int i = m;i <= n;i++)
    {
        int ti = i;
        while(ti)
        {
            a[ti % 10]++;//很妙的计数方式
            ti /= 10;
        }
    }
    for(int i = 0;i < 10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<'\n';
    return 0;
}