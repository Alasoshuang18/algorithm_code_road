//�Ų�������ַ�������ͬ�ַ��ģ�ֱ�Ӳ�Ҫ
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,s2;
    cin>>s>>s2;
    string appear1;//��¼�Ѿ����ֹ����ַ�
    string res;//��¼���մ洢���ַ���
    for(int i = 0;i < s.size();i++)
    {
        if(appear1.find(s[i]) == -1)
        {
            appear1 += s[i];
            res += s[i];
        }
    }
    for(int i = 0;i < s2.size();i++)
    {
        if(appear1.find(s2[i]) == -1)
        {
            appear1 += s2[i];
            res += s2[i];
        }
    }
    cout<<res<<"\n";
    return 0;
}