#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;
const int N = 55;
char a[N][N];
int n,m;
int main()
{
    cin>>n>>m;
    int w,b,h;
    int ans = 0x3f3f3f3f;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
        }
    }
    //枚举白色格子
    for(w = 1;w <= n-2;w++)
    {
        int bs = 0;
        for(int i = 1;i <= w;i++)
        {
            for(int j = 1;j <=m;j++)
            {
                if(a[i][j] != 'W')bs++;
            }
        }
        
    //枚举蓝色格子
    for(int b = w+1;b <= n-1;b++)
    {
        int bb = 0;
        for(int i = w+1;i <= b;i++)
        {
            for(int j = 1;j <= m;j++)
            {
                if(a[i][j] != 'B') bb++;
            }
        }

        int hh = 0;
        //枚举红色格子
            for(int i = b+1;i <= n;i++)
            {
                for(int j = 1;j <= m;j++)
                {
                    if(a[i][j] != 'R')hh++;
                }
        }
        ans = min(ans,bs+bb+hh);
    }       
    }
   
    cout<<ans<<"\n";
    return 0;
}