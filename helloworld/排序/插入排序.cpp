#include<iostream>
using namespace std;
const int N = 100010;
int a[N];

void insert_sort(int a[],int n)
{
    for(int i = 2;i <= n;i++)
    {
        int val = a[i];
        int p = i-1;//��ʾ�ź��������Ǹ������±�
        while(p >= 1 && a[p] > val)//val��ָ�������ó���������,��С�ڵ�ǰ���������һ����������Ҫ������Ǹ���������
        {
            a[p+1] = a[p];
            p--;//����ǰ���Һ��ʵĲ���λ��
        } 
        a[p+1] = val;//����������
    }
}
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++) cin>>a[i];
    insert_sort(a,n);
    for(int i = 1;i <= n;i++)cout<<a[i]<<" ";
    return 0;
}