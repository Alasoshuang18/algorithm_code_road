#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[2][2],b[2][2];
bool flag;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        flag = false;
        for(int i = 0;i < 2;i++)
        {
            for(int j = 0;j < 2;j++)
            {
                
                cin>>a[i][j];
            }
        }
        for(int i = 0;i < 4;i++)
        {
            if(a[0][0] < a[0][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1] && a[1][0] < a[1][1])
            {
                cout<<"YES"<<"\n";
                flag = true;
                break;
            }
            
            memcpy(b,a,sizeof(a));
            a[0][0] = b[1][0];
            a[0][1] = b[0][0];
            a[1][0] = b[1][1];
            a[1][1] = b[0][1];
        }
        if(!flag)cout<<"NO"<<"\n";
    }
    return 0;
}