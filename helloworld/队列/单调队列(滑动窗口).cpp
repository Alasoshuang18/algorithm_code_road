#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
deque<int> q1;
deque<int> q2;
int a[N];
int saveminn[N],savemaxx[N];
int main()
{
    int n,k;cin>>n>>k;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        while(!q1.empty() && a[q1.back()] > a[i]) q1.pop_back();//去尾操作
        while(!q2.empty() && a[q2.back()] < a[i]) q2.pop_back();
        q1.push_back(i);
        q2.push_back(i);
        if(i >= k)
        {
            while(!q1.empty() && q1.front() < i-k+1) q1.pop_front(); //卡头操作
            while(!q2.empty() && q2.front() < i-k+1) q2.pop_front();
            saveminn[i] = a[q1.front()];
            savemaxx[i] = a[q2.front()];
        }
    }
    for(int i = k;i <= n;i++)cout<<saveminn[i]<<" ";
    cout<<"\n";
    for(int i = k;i <= n;i++)cout<<savemaxx[i]<<" ";
    


    return 0;
}