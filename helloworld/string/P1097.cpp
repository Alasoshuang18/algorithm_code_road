//"���� # �ַ��������"�����Ȼ��������û�й��������
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt1 = 0,cnt2 = 0,cnt3 = 0;
    for(int i = 0;i < s.size();i++)//���Ǳ����ַ�����
    {
        if(isupper(s[i]))cnt1++;
        if(islower(s[i]))cnt2++;
        if(isdigit(s[i]))cnt3++;
    }

    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<"\n";
    
    return 0;
}