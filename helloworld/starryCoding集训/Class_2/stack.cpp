#include<iostream>
#include<stack>
using namespace std;
const int N = 1e5+10;
stack<int> stk;
int a[N];
int weizhi = 1;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        while(weizhi <= n && (stk.empty() || stk.top() != i))
        {
            stk.push(a[weizhi]);
            weizhi ++;
        }
        if(stk.top() == i)stk.pop();
        else 
        {
            cout<<"No"<<"\n";
            return 0;
        }
    }
    cout<<"Yes"<<"\n";

    return 0;
}