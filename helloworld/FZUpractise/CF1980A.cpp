// �ҵĶ����������:����ȱ�ĸ��ַ�������++
// m���ڼ��Σ��Ǹ��ַ���Ҫ���ּ��Σ�ͳ��û�г����ַ��ĸ���

// #include <iostream>
// #include <algorithm>
// using namespace std;
// const int N = 7;
// int a[N]; // ������һ��Ͱ��˼��,�������ַ���������˶��ٴ�
// int main()
// {
//     int t, n, m;
//     string s;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> m;
//         cin >> s;
//         //�ǵó�ʼ�����飡
//         for(int i = 0;i < 7;i++)
//         {
//             a[i] = 0;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             a[s[i] - 'A']++;
//         }
//         int shengyu = 0;
//         for (int i = 0; i < 7; i++) // 7��Ӧ��'A'~'G'
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
int a[N];//������¼'A'~'G'�ַ����ֵĴ���
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
            shengyu += max(m - a[i],0);//��ʵ�������˼�����㻹ʣ����ٸ��ַ�û�г���,�ܵı����ֵĴ�����ȥ����ֵĴ���
        }
        cout<<shengyu<<"\n";
    }
    return 0;
}