#include<iostream>
using namespace std;
using ll = long long;
ll f(int i)
{
    if(i == 1)return 1;
    if(i == 2)return 1;
    return f(i-1) + f(i-2);
}
int n,t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<f(n)<<"\n";
    }
    return 0;
}