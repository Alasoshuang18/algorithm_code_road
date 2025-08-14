#include<iostream>
#include<algorithm>
using namespace std;
const int N = 5010;
int a[N];
int main()
{
    int n;cin>>n;
    a[1] = 1;a[2] = 2;
    for(int i = 3;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }


    cout<<a[n]<<"\n";
}