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
    a[0] = 1;//��ʼ�� a[0]
    cin>>n;
    dfs(n,1);//��n����1��ʼ��

    return 0;
}