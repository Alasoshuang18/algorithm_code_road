//˼·:�ο�ǰ�������ַ���˼·������Ͱ�ŵ�˼��������������֣�����һ��������
//�ǵ�ͳ����һ��ʱ����Ҫ��Ͱ���
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,w;
    cin>>s;
    int x,ans = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(isdigit(s[i]))
        {
            w += s[i];
            if(i == s.size() - 1 || !isdigit(s[i+1]))
            {
                x = stoi(w);
                ans += x;
                w.clear();
                
            }
        } 
    }
    cout<<ans<<"\n";
    return 0;
}