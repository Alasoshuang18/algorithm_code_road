#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cout<<max(n-i,i-1) * 2;
    }

    return 0;
}