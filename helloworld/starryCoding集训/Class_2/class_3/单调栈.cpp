#include<iostream>
#include<stack>
using namespace std;
const int N = 2e5+10;
int a[N],f[N];
stack<int> stk;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        while(!stk.empty() && a[stk.top()] >= a[i])
        {
            stk.pop();
        }
            if(stk.empty()) f[i] = -1;
            else f[i] = a[stk.top()];
            
            stk.push(i);

    }
    
    for(int i = 1;i <= n;i++) cout<<f[i]<<" ";
    return 0;
}


//Êý×éÐ´·¨
// #include<iostream>
// #include<stack>
// using namespace std;
// const int N = 2e5+10;
// int a[N],f[N],top,stk[N];
// int main()
// {
//     int n;cin>>n;
//     for(int i = 1;i <= n;i++)cin>>a[i];
//     for(int i = 1;i <= n;i++)
//     {
//         while(top && a[stk[top]] >= a[i])top--;
//         if(top) f[i] = a[stk[top]];
//         else f[i] = -1;

//         stk[++top] = i;
//     }
//     for(int i = 1;i <= n;i++)cout<<f[i]<<" ";
//     return 0;
// }