#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int t,n,m;;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int x;
        queue<int>q;
        for(int i = 1;i <= n;i++)
        {
            cin>>x;
            q.push(x);
        }
        while(q.size() > 1)
        {
            for(int i = 1;i <= m;i++)
            {
                if(i == m)
                {
                    q.pop();
                }else 
                {
                    q.push(q.front());
                    q.pop();
                }
            }
        }
        cout<<q.front()<<"\n";
    }

    return 0;
}