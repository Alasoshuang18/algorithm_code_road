#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e6+10;
int depth;
struct node
{
    int l;
    int r;
}a[N];
void dfs(int root,int deep)
{
    if(root == 0)return;
    depth = max(depth,deep);
    dfs(a[root].l,deep + 1);
    dfs(a[root].r,deep + 1);
}
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i].l>>a[i].r;
    }
    dfs(1,1);
    cout<<depth<<"\n";

    return 0;
}