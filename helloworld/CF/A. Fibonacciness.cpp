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
        maxx = 0;//ÿ�����ֵҲҪ���£�Ҫ��Ȼ�����ظ���һ��ֵ
        cin>>a1>>a2>>a4>>a5;
        for(int a3 = -100;a3 <= 100;a3++)
        {
            cnt = 0;//һ��Ҫע���������������
            if(a3 == a1 + a2)cnt++;
            if(a4 == a2 + a3)cnt++;
            if(a5 == a3 + a4)cnt++;
            
            maxx = max(maxx,cnt);
        }
       
        cout<<maxx<<"\n";
    }
    
    
    

    return 0;
}