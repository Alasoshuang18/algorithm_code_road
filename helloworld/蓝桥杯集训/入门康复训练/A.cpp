
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4+10;
int a[N],sum;
int main()
{
    int n,y;cin>>n;
    int pos = -1;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    cin>>y;
    for(int i = 1;i <= n;i++)
    {
        if(a[i] == y)
        {
            pos = i;
            break;
        }
    }
    cout<<pos<<"\n";
    return 0; 
}
