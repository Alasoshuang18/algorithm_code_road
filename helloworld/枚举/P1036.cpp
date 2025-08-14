#include<iostream>
using namespace std;
const int N = 25;
int a[N];
int n,k,cnt;
bool is_prime(int x)
{
    for(int i = 2;i * i <= x;i++)
    {
        if(x % i == 0)return false;
    }
    return true;
}
void dfs(int u,int sum,int pos)//u表示已经选数的个数，sum表示当前的和,pos表示选择数的位置
{
    if(u == k)
    {
        if(is_prime(sum))cnt++;
        return;
    }
    for(int i = pos;i <= n;i++) dfs(u+1,sum + a[i],i+1);//i+1表示从i+1下一个位置开始
}
int main()
{
    cin>>n>>k;
    for(int i = 1;i <= n;i++)cin>>a[i];

    dfs(0,0,1);//表示从数组的第一个元素开始选
    cout<<cnt<<"\n";
    return 0;
}