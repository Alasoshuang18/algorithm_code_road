// �ҵ�˼·:�ж�ÿһ���ַ��Ƿ���Է�������
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S'))//�����ַ������������ˣ��Ͳ���Ҫ�ٴα����ַ�
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << '\n';
        }
       

    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     string s;
//     char c;
//     for(int i = 0;i < n;i++)
//     {
//         cin>>s;
//         for(int j = 0;j < s.size();j++)
//         {
//             if(s[j] >= 'a' && s[j] <= 'z')
//             {
//                 s[j] = toupper(s[j]);
//             }
//         }
//         if(s == "YES")
//         {
//             cout<<"YES"<<"\n";
//         }else cout<<"NO"<<"\n";
//     }
   
//     return 0;
// }