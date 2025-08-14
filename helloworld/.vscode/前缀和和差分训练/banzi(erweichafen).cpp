#include<iostream>
using namespace std;
const int N = 1e3+10;
int a[N][N],prefix[N][N],diff[N][N];
int main()
{
    int n,m,q,c;
    int sum = 0;
    cin>>n>>m>>q;

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            diff[i][j] += a[i][j];//这里的差分数组不需要像一维一样,用a[i][j] 来表示
            diff[i+1][j] -= a[i][j];
            diff[i][j+1] += a[i][j];
            diff[i+1][j+1] += a[i][j];
        }
    }
    
    
    while(q--)
    {
        int x1,y1,x2,y2,c;
        cin>>x1>>y1>>x2>>y2>>c;
        diff[x1][y1] += c;
        diff[x2+1][y1] -= c;
        diff[x1][y2+1] -= c;
        diff[x2+1][y2+1] += c;
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            diff[i][j] += diff[i-1][j] + diff[i][j-1] - diff[i-1][j-1];
            cout<<diff[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}