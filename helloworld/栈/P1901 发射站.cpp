#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
struct node
{
    int h,v,new1,hao;
}a[N];
stack<int> stk;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i].h>>a[i].v;
        //a[i].hao = i;
    }
    for(int i = 1;i <= n;i++)
    {
        while(!stk.empty() && a[stk.top()].h < a[i].h)
        {
            a[i].new1 += a[stk.top()].v;
            stk.pop();
        }
        if(!stk.empty())
        {
            a[stk.top()].new1 += a[i].v;
        }
        stk.push(i);
    }
    int maxx = 0;
    for(int i = 1;i <= n;i++)
    {
        maxx = max(maxx,a[i].new1);
    }
    cout<<maxx<<"\n";

    return 0;
}