#include<bits/stdc++.h>
using namespace std;
vector<string> v;//表示字符串出现的顺序
map<string,int> mp;
int main()
{
    int t,n;
    string col;
    cin>>t;
    while(t--)
    {
        // vector<string> v;//表示字符串出现的顺序
        // map<string,int> mp;
        //注意全局函数和局部函数定义的区别
        //全局函数分布在堆区数据，所以每次输出完需要清空做下一次操作
        //局部函数就不需要管清空，因为开辟在栈区，程序结束就会自动回收
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>col;
            if(mp.count(col))mp[col]++;
            else 
            {
                v.push_back(col);
                mp[col] = 1;
            }
        }
        for(auto &i : v)cout<<i<<' '<<mp[i]<<'\n';
        v.clear();
        mp.clear();
    }
    return 0;
}