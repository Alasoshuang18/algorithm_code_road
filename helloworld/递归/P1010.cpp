#include<iostream>
#include<string>
using namespace std;
string a(int x)
{
    if(x == 0)return "2(0)";
    if(x == 1)return "2";
    string ans = "2(";
    for(int i = 20;i >= 0;i--)
    {
        if((1<<i) & x)
        {
            ans += a(i);
            ans += '+';
        }
    }
    int len = ans.size();
    ans[len - 1] = ')';
    return ans;

}
int main()
{
    int n;cin>>n;
    string res = "";
    for(int i = 20;i >= 0;i--)
    {
        if((1 << i) & n)
        {
            res += a(i);
            res += '+';
        }
    }
    int len = res.size();
    res[len-1] = ' ';
    cout<<res<<"\n";
    return 0;
}