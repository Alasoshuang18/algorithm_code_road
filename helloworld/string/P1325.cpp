//˼·��ʵ��P1130,P1129�̫��,����������+,*��λ��
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{   
    string s;
    int sum,sum2,num1,num2;
    string a1,b1,a2,b2,c;//��Ƿֿ����ַ� 
    cin>>s;
    int p = s.find("+");
    int p2 = s.find("*");
    //�ӷ���ȡ����
    a1 = s.substr(1,p);//�����(0,p)���п�����ͬ������һ�����
    b1 = s.substr(p+1,p2-p);
    int x = stoi(a1);
    int y = stoi(b1);
    sum = x + y;
    //�˷���ȡ����
    //a2 = s.substr(p2+1,s.size()-p2-2);
    b2 = s.substr(p2+1);
    num2 = stoi(b2);
    sum2 = sum * num2;
    cout<<sum2<<"\n";
    return 0;
}