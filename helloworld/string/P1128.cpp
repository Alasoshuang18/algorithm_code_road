#include<iostream>
#include<cstring>
using namespace std;
bool Isprime(int n)
{
    for(int i = 2;i * i <= n;i++)
    {
        if(n % i == 0)return false;
    }
    return true;
}
int main()
{
    string s;
    string s1,s2;
    cin>>s;
    int x,y,minn = 100000000;
    //遍历拆分方案
    for(int i = 0;i < s.size() - 1;i++)//eg:五位数有四种拆分方案
    {
        s1 = s.substr(0,i+1);
        s2 = s.substr(i+1);
        //cout<<s1<<" "<<s2<<"\n";
        x = stoi(s1);
        y = stoi(s2);
        //cout<<x+y<<"\n";
        //cout<<Isprime(x+y)<<"\n";
        if(Isprime(x+y) && x+y < minn)
        {
            minn = x+y;
        }
    }
    if(minn == 100000000)
    {
        cout<<-1<<"\n";
    }else cout<<minn;
    
    return 0;
}