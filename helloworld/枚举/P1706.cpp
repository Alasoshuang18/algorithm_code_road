#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;
const int N = 15;
int a[N];
bitset<N> vis;
int n;
void dfs(int begin1)
{
    if(begin1 == n+1)
    {
        for(int i = 1;i <= n;i++)
        {
            cout<<setw(5)<<a[i];
        }
        cout<<"\n";
        return;
    } 
    for(int i = 1;i <= n;i++)
    {
        if(!vis[i])
        {
            a[begin1] = i;
            vis[i] = 1;
            dfs(begin1+1);
            vis[i] = 0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}