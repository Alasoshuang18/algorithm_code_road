//˼·:��������Ϊ�ָ���������֮ǰ�ĵ��ʽ�ȡ������֮��ĵ��ʽ�ȡ
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a = ",";
    int douhao_i = s.find(a);
    string front = s.substr(0,douhao_i);
    string behind1 = s.substr(douhao_i+1);
    cout<<behind1<<","<<front<<"\n";

}
