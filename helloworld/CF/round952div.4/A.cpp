//ֱ�����������ִ��������±�Ϊ0����ĸ����
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string a,b;
    int t;cin>>t;
    while(t--)
    {
        cin>>a>>b;

        swap(a[0],b[0]);
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}