#include<iostream>
#include<queue>
using namespace std;
const int N = 110;
queue<int>q;
int a[N];//������pop����������
int main()
{
    int n,m;cin>>n>>m;
    for(int i = 1;i <= n;i++)q.push(i);
    while(!q.empty())
    {
        for(int i = 1;i < m;i++)
        {
            q.push(q.front());
            q.pop();
        }
        //ѭ����m��Ĳ���
        cout<< q.front()<<" ";
        q.pop();
    }
    return 0;
}