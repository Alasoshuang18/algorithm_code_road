//�ַ���ת����,������ת�ַ���
//������Ҫ�𿪰�������ȡ���������ǲ�֪����ô�����������������
//���Խ��������������һһȥ������+Ϊ�ֽ�
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //ȥ���Ⱥ�
    s.pop_back();
    string a,b;
    int p = s.find("+");
    a = s.substr(0,p);
    b = s.substr(p+1);

    int num1 = stoi(a);
    int num2 = stoi(b);
    int sum = num1 + num2;
    a = to_string(sum);
    cout<<sum<<"\n";
    return 0;
}