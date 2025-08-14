#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a > b;
}
const int N = 110;
int a[N];//表示师傅个人最多能修理的个数
int main()
{
    bool flag = false;
    int m,n;cin>>m>>n;
    int sum = 0;//sum记录总零件个数
    int cnt = 0;//cnt记录师傅的个数
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    for(int i = 1;i <= n;i++)
    {
        sum += a[i];cnt++;
        if(sum >= m)
        {
            cout<<cnt<<"\n";
            flag = true;
            return 0;
        }
    }
    if(!flag)cout<<"NO"<<"\n";
    return 0;
}