//��������ջ����˼��:��ջ��Ԫ�رȵ�ǰԪ��Ҫ��,ջ�������������󵯳�,��ǰջ������Ϊ��ǰ�±�
#include<iostream>
#include<stack>
using namespace std;
const int N = 3e6+10;
int a[N],f[N];
stack<int> stk;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        while(!stk.empty() && a[stk.top()] < a[i])
        {
            f[stk.top()] = i;//Ϊʲô���ﲻ��a[i]?
            //��¼����һ������Ԫ�ء���λ�ã�����������ֵ
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty())
    {
        f[stk.top()] = 0;
        //��Ӧ��fֵ����Ϊ0����ʾ��û����һ������Ԫ�ء���
        stk.pop();
    }
    for(int i = 1;i <= n;i++)cout<<f[i]<<" ";

    return 0;
}