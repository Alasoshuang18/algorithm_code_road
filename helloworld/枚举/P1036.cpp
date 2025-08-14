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
void dfs(int u,int sum,int pos)//u��ʾ�Ѿ�ѡ���ĸ�����sum��ʾ��ǰ�ĺ�,pos��ʾѡ������λ��
{
    if(u == k)
    {
        if(is_prime(sum))cnt++;
        return;
    }
    for(int i = pos;i <= n;i++) dfs(u+1,sum + a[i],i+1);//i+1��ʾ��i+1��һ��λ�ÿ�ʼ
}
int main()
{
    cin>>n>>k;
    for(int i = 1;i <= n;i++)cin>>a[i];

    dfs(0,0,1);//��ʾ������ĵ�һ��Ԫ�ؿ�ʼѡ
    cout<<cnt<<"\n";
    return 0;
}