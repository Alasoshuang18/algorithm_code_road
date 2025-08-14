#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> mp;
    // 第一种写法
    mp.insert(pair<int, string>(111, "张三"));
    // 第二种写法
    mp.insert(make_pair(222, "李四"));
    // 第三种写法
    mp.insert({333, "王五"});
    cout << mp.size() << "\n";
    // 第四种写法（覆盖式写法）
    mp[666] = "力宏";
    mp[777] = "驶入";
    map<int, string>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << " \n";
    }

    return 0;
}