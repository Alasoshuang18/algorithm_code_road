#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    bool flag = false;
    string s,s1,s2;//s1��ʾ�ڵȺ�ǰ���ȡ�������ַ�,s2��ʾ�ڵȺź����ȡ�������ַ�
    string way1,way2;//way1��ʾs1����Ϸ���,way2��ʾs2����Ϸ���
    int x,y,z;
    cin>>s;
    int p = s.find("=");
    s1 = s.substr(0,p);
    s2 = s.substr(p+1);
    z = stoi(s2);
    //cout<<s1<<" "<<s2;
    //Ҫ������ַ����п��з���
    for(int i = 0;i < s1.size() - 1;i++)//ע���ұߵ��ַ�������Ϊ0
    {
        way1 = s.substr(0,i+1);
        way2 = s.substr(i+1);
        x = stoi(way1);
        y = stoi(way2);
        if(x + y == z)
        {
            flag = true;
            cout<<x<<"+"<<y<<"="<<z<<"\n";
        }
    }
    if(!flag)
    {
        cout<<"Impossible!";
    }
    return 0;
}