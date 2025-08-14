//还是一个记忆化搜索
#include<iostream>
#include<vector>
using namespace std;
const int N = 1100;
vector<int> vis(N);
int n;
int f(int i)
{ 
    int cnt = 1;
    if(i == 1)return 1;
    if(vis[i] != 0)return vis[i];//代表已经求过n对应的方法数，不需要再递推求解了
    for(int j = i/2;j >= 1;j--)
    {
        cnt += f(j);
    }
    vis[i] = cnt;
    return cnt;

}
int main()
{
    cin>>n;
    cout<<f(n);
    return 0;
}