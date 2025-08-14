#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        int op;cin>>op;
        if(op == 1)
        {
            int x;cin>>x;
            q.push(x);
        }
        else if(op == 2)
        {
            if(!q.empty())
            {
                if(q.front())q.pop();
            }else cout<<"ERR_CANNOT_POP"<<"\n"; 
        }
        else if(op == 3)
        {
            if(!q.empty())
            {
                cout<<q.front()<<"\n";
            }else cout<<"ERR_CANNOT_QUERY"<<"\n";
        }
        else 
        {
            if(!q.empty())
            {
                cout<<q.size()<<"\n";
            }else cout<<0<<"\n";
        }
    }

    return 0;
}