// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {   
//     string str;
//     char c;
//     cin>>str>>c;
//     //假删除做法
//     for(int i = 0;i < str.size();i++)
//     {
//         if(str[i] != c)
//         {
//             cout<<str[i];
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //真删除函数erase()做法
    string s;
    char c;
    cin>>s>>c;
    int x = s.find(c);//第一次找到的c在的下标位置
    while(x != -1)
    {
        s.erase(x,1);
        x = s.find(c);//更新下一次找字符c的位置

    }
    cout<<s;

    return 0;
}