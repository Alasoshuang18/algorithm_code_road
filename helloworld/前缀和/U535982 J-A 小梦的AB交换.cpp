//����д�� 45pts
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


//˼·:�����ֿ��� 1.ABABAB...  2.BABABA...
//������Ŀ������Ҫ������ٽ��еĲ���������������Ҫͳ���ж����ַ��ǲ���ȵ�,�����ܵĲ���ȸ�������ÿ��������������
//���ɵõ���Ӧ��������
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
