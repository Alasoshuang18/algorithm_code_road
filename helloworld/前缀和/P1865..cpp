//�����㷨:67pts
// #include<iostream>
// #include<cstdio>
// #include<algorithm>
// using namespace std;
// const int N = 15;
// int a[N];
// bool is_Prime(int x)
// {
//     if(x <= 1)return false;
//     for(int i = 2;i * i <= x;i++)
//     {
//         if(x % i == 0)return false;
//     }
//     return true;
// }
// int main()
// {
//     int n,m,cnt = 0;cin>>n>>m;
//     // for(int i = 1;i <= m;i++)
//     // {
//     //     Pre[i] += Pre[i-1];
//     //     if(is_Prime(i))
//     //     {
//     //         Pre[i]++;
//     //     } 
//     // }
//         for(int i = 1;i <= n;i++)
//         {
//             int l,r;cin>>l>>r;
//             if(l < 0 || r > m)
//             {
//                 cout<<"Crossing the line"<<"\n";
//                 continue;
//             }
//             cnt = 0;
//             for(int j = l;j <= r;j++)
//             {
//                 if(is_Prime(j)) cnt++;
//             }
//             cout<<cnt<<"\n";
//         }
//     return 0;
// }

//ŷ��ɸ(100pts)
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<bitset>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int Pre[N];//�ۼ�ǰ׺��
int b[N];//�ۼ��ж��Ƿ�������
bitset<N> vis;
int main()
{
    int n,m;cin>>n>>m;
    int k = 0;
    memset(Pre,0,sizeof(Pre));
    //ŷ��ɸ��ʽ�ϳ�
    vis[0] = vis[1] = 1;//���Ϊ��������
    for(int i = 2;i <= m;i++)
    {
        if(!vis[i])
        {
            b[++k] = i;
        }
            for(int j = 1;j <= k;j++)
            {
                if(i * b[j] > m)break;
                vis[i*b[j]] = 1;//����ɸȥ
                if(i % b[j] == 0) break;
            }
        } 
    //����ǰ׺��
    for(int i = 1;i <= m;i++)
    {
        Pre[i] = Pre[i-1] + (!vis[i]);
    }
    for(int i = 1;i <= n;i++)
    {
        int l,r;cin>>l>>r;
        if(l < 1 || r > m || l > r)
        {
            cout<<"Crossing the line"<<"\n";
            continue;
        }
        cout<<Pre[r] - Pre[l-1]<<"\n";

    }
    return 0;
}