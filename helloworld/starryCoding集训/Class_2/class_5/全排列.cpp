//�ʺ���dfs��
#include<bits/stdc++.h>
using namespace std;
const int N = 15;
int a[N];
bitset<N> vis;//��֦����
int n;
void dfs(int depth)
{
    if(depth == n+1)
    {
        for(int i = 1;i <= n;i++)printf("%5d",a[i]);
        cout<<"\n";
        return;//�ݹ���ֹ����
    } 
    
    for(int i = 1;i <= n;i++)
    {
        if(vis[i]) continue;
        vis[i] = true;
        a[depth] = i;
        dfs(depth+1);
        //����
        a[depth] = 0;
        vis[i] = false;
    }


}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}