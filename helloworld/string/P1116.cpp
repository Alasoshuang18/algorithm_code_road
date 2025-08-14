//思路:将逗号作为分隔符，逗号之前的单词截取，逗号之后的单词截取
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
