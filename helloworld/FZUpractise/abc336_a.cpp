//�ַ���ƴ�����ַ�o(�����뷨��ֻ�뵽ֻȥƴ��o)
//��ȷ˼·:ȫ����ƴ��һ��
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    s.clear();
    s = "L";
    for(int i = 0;i < n;i++)
    {
        s += 'o';
    }
    s += 'n';
    s += 'g';
    cout<<s<<"\n";
    return 0;
}