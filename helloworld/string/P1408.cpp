#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //������Ϊ���ַ����Ϸ�,���жϷǷ������
    string s;
    getline(cin,s);
    bool flag = true;
    for(int i = 0;i < s.size();i++)
    {
        if(!(isalpha(s[i]) || isdigit(s[i]) || s[i] == '_'))
        {
            flag = false;
            break;
        }
    }
        if(isdigit(s[0]))
        {
            flag = false;
        }
        if(s == "int" || s == "double" || s == "cin" || s == "cout")
        {
            flag = false;
        }
        if(flag) 
        {
            cout<<"yes"<<"\n";
        }else cout<<"no"<<'\n';
    return 0;
}