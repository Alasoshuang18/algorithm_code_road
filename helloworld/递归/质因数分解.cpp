#include<iostream>
using namespace std;
void f(int i,int p)
{
    //��ֹ����
    if(i == 1)return;
    //������
    if(i % p == 0)
    {
        cout<<p<<" ";
        f(i/p,p);
    }else
    {
        f(i,p+1);
    }

}
int main()
{
    int n;cin>>n;
    f(n,2);   
    return 0;
}