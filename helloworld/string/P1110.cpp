//思路:主要是要确定一个单词
//就得找空格位置，然后对这个单词进行遍历，再截取单词的第一位
//发现的:有几个空格就有单词数 + 1


//笑死了，假完了，想复杂了
//思路:从不是空格的下标开始记起（找出字符串的第一个字母）判断第i-1是否是空格,第i个是否不为空格

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char num;
    getline(cin,s);
    s = " " + s;//意思是从不是空格的字符开始算起

    for(int i = 1;i <= s.size();i++)
    {
        if(s[i-1] == ' ' && s[i] != ' ')//这里要注意一点就是 ,如果我们的下标是从0开始,那么就是[0,i-1]的范围，操作 i 肯定会超范围
        {
            num = toupper(s[i]);
            cout<<num;
        }
    }
    return 0;
}