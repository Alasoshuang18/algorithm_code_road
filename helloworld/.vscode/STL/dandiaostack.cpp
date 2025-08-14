#include<iostream>
#include<stack>
using namespace std;
const int N = 100010;
int a[N],l[N];
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    stack<int>sk;
    for(int i = 1;i <= n;i++)
    {
        while(sk.size() && sk.top() >= a[i])sk.pop();
        if(sk.empty())l[i] = -1;
        sk.push(a[i]);

    }
    for(int i = 1;i <= n;i++)cout<<l[i]<<" ";
    return 0;
}