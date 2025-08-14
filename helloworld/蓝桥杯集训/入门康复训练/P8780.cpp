#include<iostream>
using namespace std;
using ll = long long;
ll a,b,n,cnt,sum,week,shengyu,days;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>a>>b>>n;
    sum = 5 * a + 2 * b;
    week = n / sum;
    shengyu = n % sum;
    days = 7 * week;
    //累加剩余题目数量
    for(ll i = 1;i <= n;i++)
    {
        if(i % 7 >= 1 && i % 7 <= 5)
        {
            shengyu -= a;
        }else shengyu -= b;

        if(shengyu < 0)
        {   
            days += i;
            break;
        }
    }
    cout<<days<<"\n";
    
    
    return 0;
}