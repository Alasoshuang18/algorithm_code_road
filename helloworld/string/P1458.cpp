//˼·:���⼸��Ԫ�ش���ַ���������ȥ���ַ�������+��ƴ�ӵ���˼����ֱ����,Ȼ��������(����)��һ��ͺã�
//ֵ��ע�����vector��������0��ʼ��
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(char a,char b)//ע�����Ƕ��ַ��������򣬶�����һ�����ַ�����
{
    return a > b;
}
int main()
{
    int n;cin>>n;
    vector<string> a(n);
    string ans;
    ans.clear();
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    } 
    for(int i = 0;i < n;i++)
    {
        ans += a[i];
    }
    sort(ans.begin(),ans.end(),cmp);
    cout<<ans<<"\n";
    return 0;
}