//˼·:���ж���ż����
//ע��ӵ�:10^60,����������������������Իᱬint����ll
//���ַ����洢��ֱ�Ӷ�ȡ���ֵ����һλ���ж���ż��
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
//��ȷ˼·:Ӧ���ж����һλ�Ƿ���������ż������
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