// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {   
//     string str;
//     char c;
//     cin>>str>>c;
//     //��ɾ������
//     for(int i = 0;i < str.size();i++)
//     {
//         if(str[i] != c)
//         {
//             cout<<str[i];
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //��ɾ������erase()����
    string s;
    char c;
    cin>>s>>c;
    int x = s.find(c);//��һ���ҵ���c�ڵ��±�λ��
    while(x != -1)
    {
        s.erase(x,1);
        x = s.find(c);//������һ�����ַ�c��λ��

    }
    cout<<s;

    return 0;
}