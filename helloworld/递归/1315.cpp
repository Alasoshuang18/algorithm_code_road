//����a[i]�Ƿ�����k���Ӽ���
//1.a[i]������
//n < k || k == 0 f(n,k) = 0
// n == k || k == 0  f(n,k) = 1

//2.a[i]����
//a[i] �� k �� �Ӽ��� ����ô�Ϳ�����ǰ�� f(n-1,k-1)
//a[i] ���ڵ� k ���Ӽ��� ��ô���ǿ����Ƴ���һ�� f(n-1,k)
//��������ע��:a[i] ���Ժ� �Ӽ�������һ��Ԫ�����һ��ȫ�µ��Ӽ�
//��Ϊ�� k �� �Ӽ����������շ�����Ϊ k * f(n-1,k)
//����⿼�ĺ�ϸ��ȫ�Ƿ�������
#include<iostream>
using namespace std;
using ll = long long;

ll f(ll o,ll p)
{
    if(o < p || p == 0)return 0;
    if(o == p || p == 1)return 1;
    return f(o-1,p-1) + p * f(o-1,p);
}
int main()
{
    ll n,k;cin>>n>>k;
    cout<<f(n,k);

    return 0;
}