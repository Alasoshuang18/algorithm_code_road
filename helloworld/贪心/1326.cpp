#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a > b;
}
const int N = 110;
int a[N];//��ʾʦ���������������ĸ���
int main()
{
    bool flag = false;
    int m,n;cin>>m>>n;
    int sum = 0;//sum��¼���������
    int cnt = 0;//cnt��¼ʦ���ĸ���
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    for(int i = 1;i <= n;i++)
    {
        sum += a[i];cnt++;
        if(sum >= m)
        {
            cout<<cnt<<"\n";
            flag = true;
            return 0;
        }
    }
    if(!flag)cout<<"NO"<<"\n";
    return 0;
}