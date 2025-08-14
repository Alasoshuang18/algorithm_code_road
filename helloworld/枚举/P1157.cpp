#include<iostream>
#include<iomanip>
using namespace std;
const int N = 25;
int a[N];
int n,r;
void dfs(int begin1,int step)
{
    if(begin1 == r + 1)
    {
        for(int i = 1;i <= r;i++)
        {cout<<setw(3)<<a[i];}
        cout<<"\n";
        return;
    }

    for(int i = step;i <= n;i++) 
    {
        a[begin1] = i;
        dfs(begin1+1,i+1);
    }
}
int main()
{
    cin>>n>>r;
    dfs(1,1);
    return 0;
}
