//暴力写法 45pts
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t = 1;cin>>t;
//     int n;cin>>n;
//     if(n == 1)cout<<0<<"\n";
//     if(n == 2)cout<<1<<"\n";
//     if(n == 3)cout<<1<<"\n";

//     return 0;
// }


//思路:有两种可能 1.ABABAB...  2.BABABA...
//根据题目我们需要求出最少进行的操作次数，我们需要统计有多少字符是不相等的,再用总的不相等个数除以每两个交换的数量
//即可得到相应交换次数
#include<bits/stdc++.h>
using namespace std;
int jisuan(string &s,string &substr1)
{
    int ans = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] != substr1[i])
        {
            ans += 1;
        }
    }
    return ans / 2;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;cin>>t;
    string a,b,s;
    while(t--)
    {
        int n;cin>>n;
        cin>>s;
        for(int i = 1;i <= n * 2;i++)
        {
            if(i % 2 == 0)
            {
                a += 'A';
                b += 'B';
            }else 
            {
                a += 'B';
                b += 'A';
            }
        }
         cout<< min(jisuan(s,a),jisuan(s,b))<<"\n";
    }
   

    return 0;
}
