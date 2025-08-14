//思路：
//找到大写字母，对应进行反向控制
//找到小写字母，对应进行正向控制
//注意，isupper()和islower()不是string类函数，里面传的应该是一个个字符数组

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string daxie,xiaoxie;
    for(int i = 0;i < s.size();i++)
    {
        if(isupper(s[i]))
        {
            daxie += s[i];
        }else if(islower(s[i]))
        {
            xiaoxie += s[i];
        }
    }
    reverse(daxie.begin(),daxie.end());

    cout<<daxie+xiaoxie<<"\n";
    return 0;
}