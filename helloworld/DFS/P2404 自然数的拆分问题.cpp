#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int a[N];
int n;
void dfs(int o,int k)
{
    if(o == 0)
    {
        for(int i = 1;i <= k-2;i++)
        {
            printf("%d+",a[i]);
        }
        printf("%d\n",a[k-1]);
        return;
    }
    for(int i = a[k-1];i <= o;i++)
    {
        if(i < n)
        {
            a[k] = i;
            o -= i;

            dfs(o,k+1);
            o += i;
        }
        
    }
}
int main()
{
    a[0] = 1;//初始化 a[0]
    cin>>n;
    dfs(n,1);//拆n，从1开始拆

    return 0;
}