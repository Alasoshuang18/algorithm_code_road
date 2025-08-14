#include<iostream>
using namespace std;
int u[9];//用来储存每一位数的
int x,y,z;
bool flag = false;
int gcd(int a,int b)
{
    if(b == 0)return a;
    return gcd(b,a % b);
}
int panduan(int a,int b,int c)
{
    u[0] = a / 100;
    u[1] = a / 10 % 10;
    u[2] = a % 10;
    u[3] = b / 100;
    u[4] = b / 10 % 10;
    u[5] = b % 10;
    u[6] = c / 100;
    u[7] = c / 10 % 10;
    u[8] = c % 10;
    for(int i = 0;i < 8;i++)
    {
        if(u[i] == 0)return -1;
        //排除选过的情况
        for(int j = i + 1;j < 9;j++)
        {
            if(u[i] == u[j]) return -1;
        }
    }
    return 0;
}
int main()
{
    int a,b,c;cin>>a>>b>>c;
    int x = gcd(gcd(a,b),gcd(b,c));
    a = a / x;
    b = b / x;
    c = c / x;//化简
    for(int i = 0;i < 1000;i++)
    {
        x = a * i;
        y = b * i;
        z = c * i;
        if(panduan(x,y,z))continue;

        if(x >= 123 && z <= 987)
        {
            cout<<x<<" "<<y<<" "<<z<<"\n";
            flag = true;
        }
    }
    if(!flag)
    {
        cout<<"No!!!"<<"\n";
    }


    return 0;
}