#include<iostream>
using namespace std;
const int N = (1<<20);
char s[N],type[N];
int n;
void dfs(int x)
{
    if(x >= (1<<n))//选择最底层的子节点
    {
        if(s[x] == '1')
        {
            type[x] = 'I';
        } else 
        {
            type[x] = 'B';
        }
        cout<<type[x];
        return;
    }
    dfs(2 * x);
    dfs(2 * x + 1);
    if(type[2 * x] == type[2 * x + 1])
    {
        type[x] = type[2 * x];
    }else 
    {
        type[x] = 'F';
    }
    cout<<type[x];
}
int main()
{
    cin>>n;
    for(int i = (1<<n);i < (1<<(n+1));i++)
    {
        cin>>s[i];
    }
    dfs(1);

    return 0;
} 