#include<bits/stdc++.h>
using namespace std;
const int N = 1100;
vector<int> rever(N);
int n;
//我没有考虑可以添加到i后面的合法数字！
// int ban = n / 2;
// int f(int i,int p)
// {
//     int cnt = 0;
//     if(i <= ban)
//     {
//         cnt ++;
//         return f(i/2,p);
//     }
//     else 
//     {
//         cnt ++;
//         return f(i/2,p+1);
//     }
//     return cnt;
// }
int f(int i)
{
    if(i == 1)return 1;
    if(rever[i] != 0) return rever[i];//如果已经计算过，直接返回结果
    //对于每个数字 i，递归函数会多次计算相同的子问题，导致时间复杂度呈指数级增长。
    int cnt = 1;
    //cnt = 1;//这个插入了一个有效数字
    for(int j = 1;j <= i/2;j++)//枚举后边的合法数字
    {
        
        cnt += f(j);
    }
    rever[i] = cnt;
    return cnt;
}
//需要上记忆化方法

int main()
{
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}