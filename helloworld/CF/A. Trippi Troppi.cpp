#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;cin>>t;
    cin.ignore();//���������루�����ȶ�ȡ�������ٶ�ȡ�ַ���)
    while(t--)
    {
        string s;getline(cin,s);
        int p = s.find(" ");
        int p2 = s.find(" ",p+1);
        char zifu = s[0];
        char zifu2 = s[p+1];
        char zifu3 = s[p2+1];
        cout<<zifu<<zifu2<<zifu3<<"\n";
    }
   

    return 0;
}