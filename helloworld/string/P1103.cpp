//˼·:�ҳ���ͬ���ַ�������++
//����ע����ʱ��ֹ�����ַ���ͬ��Ҳ���������ĸ�����
//��Ҫ���� �ַ����Ƿ�Ϊ�յ������������
// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     string ans;
//     int cnt = 1;//��1��ʼ������������һ���ַ�
//     if(s.empty())
//     {
//         return 0;
//     }
//     for(int i = 1;i < s.size();i++)
//     {
//         if(s[i] == s[i-1])cnt++;
//         else 
//         {
//             if(cnt > 1)
//             {
//                 ans += to_string(cnt) + s[i-1];
//             }else{
//                 ans += s[i-1];
//             }
//             cnt = 1;
//         }
//     }
//     //�������һ���ַ������
//     if(cnt > 1)
//     {
//         ans += to_string(cnt) + s[s.size()-1];
//     }else
//     {
//         ans += s[s.size() - 1];
//     }
//     cout<<ans<<"\n";
//     return 0;
// }


//�������������˼�밡������������

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0;i < s.size();i++)
    {
        cnt++;//����Ϊ�����ȥ���ͳ�Ƶ�һ���ַ���

        //�ж���������������
        if(i == s.size() - 1 || s[i] != s[i+1])//ע��:��дs[i] != s[i-1]�ڵ�һ��������������Խ������
        {
            if(cnt > 1)
            {
                cout<<cnt<<s[i];
            }else
            {
                cout<<s[i];
            }
            cnt = 0;
        }
    }
    return 0;
}