#include<iostream>
using namespace std;
const int N = 25;
int a[N][N];
int dfs(int x,int y)
{
    if(a[x][y] != 0) return a[x][y];
    if(!x) return 1;
    if(x > 0)a[x][y] += dfs(x-1,y+1);
    if(y > 0)a[x][y] += dfs(x,y-1);
    return a[x][y];
}
int main()
{
    int n;cin>>n;
    cout<<dfs(n,0);
    return 0;
}