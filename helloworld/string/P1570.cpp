// ����һ:��str[i]������Ҫ�����滻���ַ����Աȣ�������ϣ���ֱ���滻�ַ�
//  #include<iostream>
//  #include<cstring>
//  using namespace std;
//  int main()
//  {
//      string str;
//      char c1,c2;
//      cin>>str>>c1>>c2;
//      for(int i = 0;i < str.size();i++)
//      {
//          if(str[i] == c1)
//          {
//              str[i] = c2;
//          }
//          cout<<str[i];
//      }
//      return 0;
//  }

// ����������string���ú���replace()���в���
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    string c1, c2;
    cin >> str >> c1 >> c2;
    int x = str.find(c1);
    while (x != -1) // ע�����ﲻ��forѭ����
    {
        str.replace(x, 1, c2);
        // ���ø�����һ����Ҫ�ҵ��Ӵ�
        x = str.find(c1);
    }
    cout << str;
    return 0;
}