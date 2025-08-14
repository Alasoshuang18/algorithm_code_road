#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int main()
{
    string str,a;
    getline(cin,str);
    getline(cin,a);
    //把两个字符串都换成小写字符更好比较
    for(int i = 0;i < a.size();i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }
    for(int i = 0;i < str.size();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    str = " " + str + " ";
    a = " " + a + " ";
    if(a.find(str) == -1)cout<<-1<<'\n';
    else 
    {
        int t = a.find(str);
        int tmp = t;
        int cnt = 0;
        while(tmp != -1)
        {
            cnt++;
            tmp = a.find(str,tmp+1);
        }
        cout<<cnt<<" "<<t<<'\n';
    }
    
    return 0;
}