#include<iostream>
using namespace std;
bool flag;
void f(int n,int yin,int p)
{
    //�˳�����
    if(n == 1)
    {
        if(flag)cout<<"*";
        if(p >= 2)cout<<yin<<"^"<<p;
        else cout<<yin<<"\n";
        return;
    }
    if(n % yin == 0) f(n/yin,yin,p+1);
    else 
    {
        if(p > 0)
        {
            if(flag)cout<<"*";//��һ�β���*�ͽ�flag����Ϊtrue
            flag = true;
            if(p >= 2)cout<<yin<<"^"<<p;
            else cout<<yin;
        }
        f(n,yin+1,0);
    }
    

}
int main()
{
    int n;cin>>n;
    f(n,2,0);
    return 0;
}