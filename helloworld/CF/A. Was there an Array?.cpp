#include<bits/stdc++.h>
using namespace std;
const int N = 150;
int b[N];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        bool flag = true;
        int n;cin>>n;
        for(int i = 0;i < n-2;i++)
        {
            cin>>b[i];
        } 
        for(int i = 0;i < n-3;i++)
        {
            if(b[i] == 0 && b[i-1] == 1 && b[i+1] == 1)
            {
                //cout<<"NO"<<"\n";
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";
    }
    
    return 0;
}