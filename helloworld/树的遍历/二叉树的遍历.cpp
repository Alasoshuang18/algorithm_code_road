#include<iostream>
using namespace std;
int n = 3;
void dfs(int x)//x��ʾ�ڵ�
{
    if(x >= (1<<n)) return;
    cout<<x<<" ";//������ڵ�(�������)
    dfs(2 * x);
    dfs(2 * x + 1);
}
int main()
{
    dfs(1);

    return 0;
}