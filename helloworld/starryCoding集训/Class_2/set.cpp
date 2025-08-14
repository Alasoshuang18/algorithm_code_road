#include<bits/stdc++.h>
using namespace std;
set<int> st;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        int x;cin>>x;
        st.insert(x);
    }

    for(auto &i : st)cout<<i<<" ";

    return 0;
}