#include<iostream>
using namespace std;
int d,I;//d��ʾ���,I��ʾ��Ҫ�߶��ٴ�
const int N = (1<<21);
int v[N];
int ans;
void dfs(int x)
{
    if(x >= (1<<(d-1)))
    {
        ans = x;
        return;
    }
    //���û�г�����Ӧ 2 ^(d - 1),����Ҫ�ж�v�Ƿ�Ϊtrue/false
    if(v[x] == false)
    {
        v[x] = true;
        dfs(2 * x);
    }else 
    {
        v[x] = false;
        dfs(2 * x + 1);
    }
}
int main()
{
    cin>>d>>I;
    for(int i = 1;i <= I;i++)
    {
        dfs(1);
    }
    cout<<ans<<"\n";

    return 0;
}