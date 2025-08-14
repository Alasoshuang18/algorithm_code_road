#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,cnt = 0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        cnt = 0;//注意每一轮后cnt 都要清零！！
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
                cnt++;
        }
            
            cout<<cnt<<"\n";
    }
    return 0;
}