#include<iostream>
#include<algorithm>
using namespace std;
const int N = 150;
char a[N][N];
int r,c,k;
int main()
{
    cin>>r>>c>>k;
    int ans = 0;
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            cin>>a[i][j];
        }
    }
    //ÿ�������Ŀյأ�.��������һ�����е�վλ����Ҫ��������
    if(k == 1) 
    {
        for(int i = 0;i < r;i++)
        {
            for(int j = 0;j < c;j++)
            {
                if(a[i][j] == '.')ans++;
            }
        }
    }else 
    {
        //ö�ٺ���
    for(int i = 0;i < r;i++)
    {
        int kongdi = 0;//�����ж������յ�����
        for(int j = 0;j < c;j++)
        {
            if(a[i][j] == '.') 
            {
                kongdi++;
           
                if(kongdi == k)
                {
                    ans++;
                    kongdi--;
                }   
            }else 
            {
                kongdi = 0;
            }
        }
    }

    //ö������
    for(int j = 0;j < c;j++)
    {
        int kongdi2 = 0;
        for(int i = 0;i < r;i++)
        {
            if(a[i][j] == '.' )
            {
                kongdi2++;
                if(kongdi2 == k)
                {
                    ans ++;
                    kongdi2--;
                }
            }
            else kongdi2 = 0;
        }
    }
    }
    
    cout<<ans<<"\n";
    return 0;
}