//思路:将这几个元素存进字符数组里面去，字符操作的+是拼接的意思可以直接做,然后将他排序(降序)排一遍就好！
//值得注意的是vector的索引从0开始的
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(char a,char b)//注意这是对字符进行排序，而不是一整个字符串！
{
    return a > b;
}
int main()
{
    int n;cin>>n;
    vector<string> a(n);
    string ans;
    ans.clear();
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    } 
    for(int i = 0;i < n;i++)
    {
        ans += a[i];
    }
    sort(ans.begin(),ans.end(),cmp);
    cout<<ans<<"\n";
    return 0;
}