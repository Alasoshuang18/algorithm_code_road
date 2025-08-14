#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // //vector<int> a(100);
    // vector<double> a2;
    // vector<vector<int>> a(5, vector<int>(6, 10));
    // a.push_back(1);
    // for (auto &i : a)
    //     cout << i << "\n";

    // stack<int> stk;
    // stk.push(1);
    // stk.push(2);
    // cout << stk.top() << "\n";

    // priority_queue<int, vector<int>, greater<int>> pque;

    // set<int> st;
    // st.insert(1);
    // st.insert(2);
    // st.insert(3);
    // st.insert(4);
    // st.insert(5);
    // st.insert(6);
    // // for (auto &i : st)
    // //     cout << i << " ";
    // st.erase(3);
    // if(st.find(4) != st.end())
    // {
    //     cout<<"yes"<<"\n";
    // }
    // //遍历
    // for(set<int>::iterator it = st.end();it != st.end();it++)
    // {
    //     cout<<*it<<"\n";
    // }
    // map<int,int>mp;//整型到整型的映射
    // mp[2] = 1;
    // cout<<mp.count(2)<<"\n";
    // cout<<mp.size()<<"\n";
    // // cout<<mp[1]<<"\n";
    // // cout<<mp[2]<<"\n";
    // mp.erase(2);
    // if(mp.find(2) != mp.end())//返回查询到的元素的迭代器
    // {
    //     cout<<"yes"<<"\n";
    // }else 
    // {
    //     cout<<"NO"<<"\n";
    // }
    // map<int,int> mp;
    // mp[2] = 1;
    // mp[9] = 2;
    // mp[0] = 12;
    // mp[19] = 14;
    // //两种map遍历方式
    // for(map<int,int>:: iterator it = mp.begin();it != mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<"\n";
    // }
    // for(auto &i:mp)
    // {
    //     cout<<i.first<<" "<<i.second<<"\n";
    // }
    pair<int,int> p = {1,2};
    cout<<p.first<<' '<<p.second<<"\n";
    return 0;
}