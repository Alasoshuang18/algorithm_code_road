//重点是我们怎么将这 n 个人变成环，只需要将 第 n 个人如果等于 n+1 个人，就把当前位置清为1
//a[cnt] 用来标记编号为 cnt 的人是否被淘汰
#include<iostream>
using namespace std;
const int N = 110;
int a[N];
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 1,sum = 0,now = 0;//cnt表示当前位置,sum表示出局人数,now表示现在报的数
    while(sum != n)
    {
        if(!a[cnt])// 如果当前位置的人没有被淘汰
        {
            now++;
            if(now == m)
            {
                cout<<cnt<<" ";
                a[cnt] = 1;
                sum++;//出局人数累加
                now = 0;//游戏重来,报数重置
            }
        }
        cnt++;//移动到下一个为主
        if(cnt == n+1)cnt = 1;
    }
   
    return 0;
}