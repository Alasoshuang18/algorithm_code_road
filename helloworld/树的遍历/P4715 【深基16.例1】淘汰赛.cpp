#include<iostream>
using namespace std;
const int N = (1<<8);
int v[N],member[N],n;
void dfs(int x)
{
    if(x >= (1<<n))return;
    dfs(2 * x);
    dfs(2 * x + 1);
    int lshili = v[2 * x];
    int rshili = v[2 * x + 1];
    if(lshili > rshili)
    {
        v[x] = lshili;
        member[x] = member[2 * x];
    }else 
    {
        v[x] = rshili;
        member[x] = member[2 * x + 1];
    }
}
int main()
{
    cin>>n;
    int num;
    for(int i = 0;i < (1<<n);i++)
    {
        cin>>v[(1<<n) + i];//输入最底层子节点的实力值
        member[(1<<n) + i] = i + 1;
    }
    dfs(1);
    if(v[2] > v[3])
    {
        num = member[3];
    }else 
    {
        num = member[2];
    }
    cout<<num<<"\n";

    
    return 0;
}