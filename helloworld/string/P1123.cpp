//思路:参考前面连续字符的思路，按照桶排的思绪，如果碰到数字，就入一个数组中
//记得统计下一个时，需要把桶清空
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,w;
    cin>>s;
    int x,ans = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(isdigit(s[i]))
        {
            w += s[i];
            if(i == s.size() - 1 || !isdigit(s[i+1]))
            {
                x = stoi(w);
                ans += x;
                w.clear();
                
            }
        } 
    }
    cout<<ans<<"\n";
    return 0;
}