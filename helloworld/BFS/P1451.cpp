#include<bits/stdc++.h>
using namespace std;
const int N = 120;
char a[N][N];
bool vis[N][N];
//��Ҫ�������������ĸ���λ
int d[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};//����Ϊ���ĸ����꣬ÿ������ռ����
//�ṹ�嶨��һ���������
struct node
{
    int x,y;
}q[N];
int n,m;
void bfs(int x,int y)
{
    int hh = 1,tt = 1;
    //������������
    q[tt].x = x;
    q[tt].y = y;
    tt ++;
    while(hh < tt)
    {
        int x1 = q[hh].x;
        int y1 = q[hh].y;
        vis[x1][y1] = 1;
        for(int i = 0;i < 4;i++)
        {
            int dx = x1 + d[i][0];
            int dy = y1 + d[i][1];
            if(dx >= 0 && dx < n && dy >= 0 && dy < m && a[dx][dy] != '0' && !vis[dx][dy])
            {
                //������ھӵ�ֱ�Ӽӽ���
                q[tt].x = dx;
                q[tt].y = dy;
                vis[dx][dy] = 1;
                tt++;
            }
        }
        hh++;
    }
}
int main()
{
    int cnt = 0;scanf("%d%d",&n,&m);
    memset(vis,0,sizeof(vis));
    for(int i = 0;i < n;i++)scanf("%s",a[i]);//��Ϊ�˴����ַ�������ֱ�ӿ��԰���һ�������ȥ
    //����ÿ����Ϊ'0'�ĵ�
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i][j] != '0' && !vis[i][j])
            {
                //�൱���ҵ��ڵ�,���ڵ���������
                cnt++;
                vis[i][j] = 1;
                bfs(i,j);
                
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}