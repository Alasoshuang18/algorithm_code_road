#include<iostream>
using namespace std;
const int N = 1e6+10;
int a[N];
int n,m;
int check(int x)
{
    int l = 1,r = n+1;
    while(l < r)
    {
        int mid = l + ((r-l) >> 1);
        if(a[mid] <= x)l = mid + 1;
        else r = mid;
    }
    if(a[l - 1] == x)return l-1;
    //���� l-1 ����Ϊ������� l = rʱ�Ž�������ʱ�������ȷ�����l ����һ������������Ҫ-1
    else return -1;
}
int main()
{
    int q;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)cin>>a[i];
    while(m--)
    {
        cin>>q;
        int ans = check(q);
        cout<<ans<<" ";
    }
    

    return 0;
}