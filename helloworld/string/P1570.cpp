// 方法一:用str[i]数组与要进行替换的字符做对比，如果符合，则直接替换字符
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

// 方案二：用string内置函数replace()进行操作
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    string c1, c2;
    cin >> str >> c1 >> c2;
    int x = str.find(c1);
    while (x != -1) // 注意这里不是for循环了
    {
        str.replace(x, 1, c2);
        // 还得更新下一个需要找的子串
        x = str.find(c1);
    }
    cout << str;
    return 0;
}