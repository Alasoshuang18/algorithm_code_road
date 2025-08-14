//思路:与P1458类似，也是将数据存入字符串中,然后对应拼接排序
//但是注意一个点就是如果这个数有一位为0的情况还要多加考虑
//问了一下AI,应该先对所有数字进行排序
//然后再处理0的情况
//如果0是排序后的第一个数字
//应该将其与第一个非0数字交换位置
//然后再将所有的数组拼接成字符串的形式
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{   
    int n;cin>>n;
    vector<int> s(n);
    string ans;
    ans.clear();
    for(int i = 0;i < n;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    //如果第一个数字为0,那么就没法满足条件
    if(s[0] == 0)
    {
        for(int i = 0;i < n;i++)
        {
            if(s[i] != 0)
            {
                swap(s[0],s[i]);break;
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        ans += to_string(s[i]);
    }
    cout<<ans<<"\n";
    return 0;
}