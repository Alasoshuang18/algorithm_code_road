// ������ ���������ܿ�������ǰ׺�ͣ�ֱ������
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 10;
ll a[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll Prefix = 0, cnt = 0,maxx = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            Prefix += a[i];
            maxx = max(maxx,a[i]);
            if(Prefix - maxx == maxx)
            {
                cnt++;
            }
            //if (Prefix - a[i] == a[i])  ��ȥ���һ�������õ�ǰ��ǰ׺��
            //����û�о���������ӿ��Ի���
            //Prefix = 2 * a[i];
            /*
            if(Prefix % 2 == 0)
            {
                int half = Prefix / 2;
                for(int j = 1;j <= i;j++)
                {
                    if(a[j] == half)
                    {
                        cnt ++;
                        break;
                    }
                }
            }
    }
        cout << cnt << "\n";
    }
            */
    } 
        cout<<cnt<<"\n";
    }        
    return 0;
}