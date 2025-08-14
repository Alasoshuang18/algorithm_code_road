#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    bool flag = false;
    string s,s1,s2;//s1表示在等号前面截取下来的字符,s2表示在等号后面截取下来的字符
    string way1,way2;//way1表示s1的组合方案,way2表示s2的组合方案
    int x,y,z;
    cin>>s;
    int p = s.find("=");
    s1 = s.substr(0,p);
    s2 = s.substr(p+1);
    z = stoi(s2);
    //cout<<s1<<" "<<s2;
    //要把左边字符排列可行方案
    for(int i = 0;i < s1.size() - 1;i++)//注意右边的字符数不能为0
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