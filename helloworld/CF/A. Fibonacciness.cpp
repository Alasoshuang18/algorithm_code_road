#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int cnt = 0;
    int a1,a2,a4,a5;
    int maxx = 0;
    while(t--)
    {
        maxx = 0;//每轮最大值也要更新，要不然就是重复那一个值
        cin>>a1>>a2>>a4>>a5;
        for(int a3 = -100;a3 <= 100;a3++)
        {
            cnt = 0;//一定要注意这里清零操作啊
            if(a3 == a1 + a2)cnt++;
            if(a4 == a2 + a3)cnt++;
            if(a5 == a3 + a4)cnt++;
            
            maxx = max(maxx,cnt);
        }
       
        cout<<maxx<<"\n";
    }
    
    
    

    return 0;
}