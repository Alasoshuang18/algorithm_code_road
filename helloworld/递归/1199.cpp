#include <iostream>
using namespace std;
const int N = 110;
char ans[N];  // ������
bool vis[N]; // �������
string s;
void dfs(int d)
{
    // ��ֹ����
    if (d == s.size() + 1)
    {
        for (int i = 1; i < d; i++)printf("%c", ans[i]);
        printf("\n");
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;    // �ȱ��
            ans[d] = s[i]; // ���
            dfs(d + 1);    // ����һ��
            vis[i] = 0;    // ���ݵ���
        }
    }
}

int main()
{
    // string s;
    cin>>s;
    int len = s.size();
    dfs(1);
    return 0;
}