//˼·:��P1458���ƣ�Ҳ�ǽ����ݴ����ַ�����,Ȼ���Ӧƴ������
//����ע��һ�����������������һλΪ0�������Ҫ��ӿ���
//����һ��AI,Ӧ���ȶ��������ֽ�������
//Ȼ���ٴ���0�����
//���0�������ĵ�һ������
//Ӧ�ý������һ����0���ֽ���λ��
//Ȼ���ٽ����е�����ƴ�ӳ��ַ�������ʽ
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{   
    int n;cin>>n;
    vector<int> s(n);
    string ans;
    ans.clear();
    for(int i = 0;i < n;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    //�����һ������Ϊ0,��ô��û����������
    if(s[0] == 0)
    {
        for(int i = 0;i < n;i++)
        {
            if(s[i] != 0)
            {
                swap(s[0],s[i]);break;
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        ans += to_string(s[i]);
    }
    cout<<ans<<"\n";
    return 0;
}