//思路:简单判断奇偶即可
//注意坑点:10^60,如果按照这样常规做法绝对会爆int或者ll
//用字符串存储，直接读取数字的最后一位来判断奇偶性
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     int num;
//     while(n--)
//     {
//         cin>>num;
//         if(num % 2 == 0)
//         {
//             cout<<"even"<<"\n";
//         }else cout<<"odd"<<"\n";
//     }
//     return 0;
// }
//正确思路:应该判断最后一位是否是奇数或偶数即可
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        char zuihou = s.back();
        if(zuihou == '0' || zuihou == '2' || zuihou == '4' || zuihou == '6' || zuihou == '8')
        {
            cout<<"even"<<"\n";
        }else cout<<"odd"<<"\n";

    }
    return 0;
}