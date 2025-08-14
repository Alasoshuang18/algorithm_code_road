// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string f,t;
//     getline(cin,f);
//     getline(cin,t);
//     int x = f.find(t);//先找第一次出现的下标
//     if(x == -1)
//     {
//         cout<<-1;
//     }else
//     {
//         while(x != -1)
//         {
//             cout<<x + 1<<'\n';
//             x = f.find(t,x+1);//迭代寻找下一次的下标
//         }
//     }

//     return 0;
// }

// 用substr实现
// 子子串是有几个字符，我们在父串中就截取对应的字符与子子串进行对比

#include <iostream>
#include <string>
using namespace std;
int main()
{
    bool flag = 0;
    string f, z;
    string x; // 存放对应的截取字串
    getline(cin, f);
    getline(cin, z);
    for (int i = 0; i < f.size(); i++)
    {
        x = f.substr(i, z.size());
        // cout<<x<<'\n';
        if (x == z)
        {
            cout << i + 1 << '\n';
            flag = 1;
        }
    }
    if (!flag)
        cout << -1;
    return 0;
}