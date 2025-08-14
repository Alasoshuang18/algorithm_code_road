#include<iostream>
using namespace std;
const int N = 1e5+10;
int a[N],Prefix[N];
int main()
{
    int n,m;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }

    for(int i = 1;i <= n;i++)
    {
        Prefix[i] = Prefix[i-1] + a[i];
    }
    cin>>m;
    while(m--)
    {
        int l,r;cin>>l>>r;
        cout<<Prefix[r] - Prefix[l-1]<<"\n";
    }
   

    return 0;
}