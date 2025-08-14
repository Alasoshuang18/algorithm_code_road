//思路其实与P1130,P1129差不太多,这里重在找+,*的位置
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{   
    string s;
    int sum,sum2,num1,num2;
    string a1,b1,a2,b2,c;//标记分开的字符 
    cin>>s;
    int p = s.find("+");
    int p2 = s.find("*");
    //加法截取主场
    a1 = s.substr(1,p);//如果是(0,p)很有可能连同左括号一起截入
    b1 = s.substr(p+1,p2-p);
    int x = stoi(a1);
    int y = stoi(b1);
    sum = x + y;
    //乘法截取主场
    //a2 = s.substr(p2+1,s.size()-p2-2);
    b2 = s.substr(p2+1);
    num2 = stoi(b2);
    sum2 = sum * num2;
    cout<<sum2<<"\n";
    return 0;
}