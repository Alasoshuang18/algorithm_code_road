//ģ�� k * x �Ľ��������ֵ��maxx��̨�Ƚϣ���������󣬽�����ֵ���±���и���
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int sum = 0;
    while(t--)
    {
        int n;cin>>n;
        int maxx = 0,maxx_id = -1;
        for(int x = 2;x <= n;x++)
        {
            int sum = 0;
            for(int k = 1;k * x <= n;k++)
            {
                    sum += k * x;
            }
        if(sum > maxx)
        {
            maxx = sum;
            maxx_id = x;
        }
    }  
        cout<<maxx_id<<"\n";
    }
    return 0;
}