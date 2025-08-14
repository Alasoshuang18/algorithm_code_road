// 我的读题理解题意:就是缺哪个字符计数器++
// m等于几次，那个字符就要出现几次，统计没有出现字符的个数

// #include <iostream>
// #include <algorithm>
// using namespace std;
// const int N = 7;
// int a[N]; // 类似于一个桶的思想,用来存字符里面出现了多少次
// int main()
// {
//     int t, n, m;
//     string s;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> m;
//         cin >> s;
//         //记得初始化数组！
//         for(int i = 0;i < 7;i++)
//         {
//             a[i] = 0;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             a[s[i] - 'A']++;
//         }
//         int shengyu = 0;
//         for (int i = 0; i < 7; i++) // 7对应着'A'~'G'
//         {
//                 shengyu += max(m-a[i],0);
//         }
//         cout << shengyu << "\n";
//     }
//     return 0;
// }
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 7;
int a[N];//用来记录'A'~'G'字符出现的次数
string s;
int main()
{
    int t;cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        cin>>s;
        for(int i = 0;i < N;i++)
        {
            a[i] = 0;
        }
        for(int i = 0;i < n;i++)
        {
            a[s[i] - 'A']++;
        }
        int shengyu = 0;
        for(int i = 0;i < N;i++)
        {
            shengyu += max(m - a[i],0);//其实这里的意思就是你还剩余多少个字符没有出现,总的比赛轮的次数减去你出现的次数
        }
        cout<<shengyu<<"\n";
    }
    return 0;
}