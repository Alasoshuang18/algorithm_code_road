#include<bits/stdc++.h>
using namespace std;
vector<string> v;//��ʾ�ַ������ֵ�˳��
map<string,int> mp;
int main()
{
    int t,n;
    string col;
    cin>>t;
    while(t--)
    {
        // vector<string> v;//��ʾ�ַ������ֵ�˳��
        // map<string,int> mp;
        //ע��ȫ�ֺ����;ֲ��������������
        //ȫ�ֺ����ֲ��ڶ������ݣ�����ÿ���������Ҫ�������һ�β���
        //�ֲ������Ͳ���Ҫ����գ���Ϊ������ջ������������ͻ��Զ�����
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>col;
            if(mp.count(col))mp[col]++;
            else 
            {
                v.push_back(col);
                mp[col] = 1;
            }
        }
        for(auto &i : v)cout<<i<<' '<<mp[i]<<'\n';
        v.clear();
        mp.clear();
    }
    return 0;
}