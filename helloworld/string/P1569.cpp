//˼·��
//�ҵ���д��ĸ����Ӧ���з������
//�ҵ�Сд��ĸ����Ӧ�����������
//ע�⣬isupper()��islower()����string�ຯ�������洫��Ӧ����һ�����ַ�����

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string daxie,xiaoxie;
    for(int i = 0;i < s.size();i++)
    {
        if(isupper(s[i]))
        {
            daxie += s[i];
        }else if(islower(s[i]))
        {
            xiaoxie += s[i];
        }
    }
    reverse(daxie.begin(),daxie.end());

    cout<<daxie+xiaoxie<<"\n";
    return 0;
}