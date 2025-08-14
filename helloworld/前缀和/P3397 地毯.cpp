#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+10;
int a[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= m;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        for(int j = x1;j <= x2;j++)
        {
            a[j][y1] += 1;
            a[j][y2 + 1] -= 1; 
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            a[i][j] += a[i][j-1];
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}