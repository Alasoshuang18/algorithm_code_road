#include<iostream>
#include<stack>
#include<vector>
using namespace std;
using ll = long long;
const int N = 1e4+10;
int main()
{
    //入栈push()
    //出栈 pop()
    ll n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
        //a.push_back(i);
    }
    stack<int>stk;
    int idx = 1;
    for(int i = 0;i < n;i++)
    {
        stk.push(a[i]);
        while(!stk.empty() && stk.top() == idx)
        {
            stk.pop();
            idx++;
        }
    }
        if(stk.empty())
    {
            cout<<"Yes"<<'\n';
    }else cout<<"No"<<'\n';

    return 0;
}