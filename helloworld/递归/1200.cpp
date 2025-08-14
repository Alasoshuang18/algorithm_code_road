#include<iostream>
using namespace std;
using ll = long long;
ll cnt;
void f(int u,int p)//p表示分解的起点
{
 
    if(u <= p)return;
    for(int i = p;i*i <= u;i++)
    {
        if(u % i == 0)
        {
            cnt++;
            f(u / i,i);
        }
    } 
}
int main()
{   
    int n,t;cin>>t;
    //int cnt;
    while(t--)
    {
        cin>>n;
        cnt = 1;
        f(n,2);
        cout<<cnt<<"\n";
    }
    
    
    return 0;
}