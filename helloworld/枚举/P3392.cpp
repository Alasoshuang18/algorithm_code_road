#include<iostream>
using namespace std;
const int N = 55;
int n,m,w,b,r;
char a[N][N];
int main()
{
    cin>>n>>m;
    int bs,bb,hh;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
        }
    }
    //ö�ٰ�С����
    for(w = 1;w <= n-2;w++)
    {
        for(int j = 1;j <= m;j++)
        {
            bs = 0;
            if(a[w][j] != 'W')bs++;
        }
    }
    //ö����ɫС����
    for(int b = w+1;b <= n-1;b++)
    {
        for(int j = 1;j <= m;j++)
        {
            bb = 0;
            if(a[b][j] != 'B')bb++;
        }
    }
    //ö�ٺ�ɫС����
    for(int h = b + 1;h <= n;h++)
    {
        for(int j = 1;j <= m;j++)
        {
            hh = 0;
            if(a[h][j] == 'R')hh++;
        }
    }
    int ans = min(ans,bs+bb+hh);
    cout<<ans<<"\n";
    return 0;
}