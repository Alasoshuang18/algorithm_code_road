#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;cin>>n;
    cin.ignore();
    int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0,cnt5 = 0;
    for(int i = 0;i < n;i++)
    {
        getline(cin,s);
        cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0,cnt5 = 0;//一定要注意多组数据操作的时候做下一次操作一定要清空啊！！
        for(int j = 0;j < s.size();j++)
        {
                if(s[j] == 'a')cnt1++;
                if(s[j] == 'e')cnt2++;
                if(s[j] == 'i')cnt3++;
                if(s[j] == 'o')cnt4++;
                if(s[j] == 'u')cnt5++;
            }
            cout<<"a:"<<cnt1<<"\n";
            cout<<"e:"<<cnt2<<"\n";
            cout<<"i:"<<cnt3<<"\n";
            cout<<"o:"<<cnt4<<"\n";
            cout<<"u:"<<cnt5<<"\n";
            if(i < n-1)cout<<"\n";
        }
    return 0;
}