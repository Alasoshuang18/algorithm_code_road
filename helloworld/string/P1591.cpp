// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string f,t;
//     getline(cin,f);
//     getline(cin,t);
//     int x = f.find(t);//���ҵ�һ�γ��ֵ��±�
//     if(x == -1)
//     {
//         cout<<-1;
//     }else
//     {
//         while(x != -1)
//         {
//             cout<<x + 1<<'\n';
//             x = f.find(t,x+1);//����Ѱ����һ�ε��±�
//         }
//     }

//     return 0;
// }

// ��substrʵ��
// ���Ӵ����м����ַ��������ڸ����оͽ�ȡ��Ӧ���ַ������Ӵ����жԱ�

#include <iostream>
#include <string>
using namespace std;
int main()
{
    bool flag = 0;
    string f, z;
    string x; // ��Ŷ�Ӧ�Ľ�ȡ�ִ�
    getline(cin, f);
    getline(cin, z);
    for (int i = 0; i < f.size(); i++)
    {
        x = f.substr(i, z.size());
        // cout<<x<<'\n';
        if (x == z)
        {
            cout << i + 1 << '\n';
            flag = 1;
        }
    }
    if (!flag)
        cout << -1;
    return 0;
}