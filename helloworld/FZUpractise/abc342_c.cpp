// ��һֱ����Ŀ�븴���ˣ������string�����Ŀ�е��
// �����Ҿ����Ű�c���±��ҳ�����Ȼ���滻������ȴֻ���滻һ��,��̫��һ���Ի���
// û�뵽ֱ���� �ַ����е��ַ���cƥ�䣬ƥ��ɹ������滻�� d
// �������ַ���ֻ�ᳬʱ������������Ҫ�Ż�
// ���ǿ��Բ��ü�¼Ҫ�滻����ĸ�������ٰ����滻�ɱ����ĸ�ķ�ʽ
#include <iostream>
#include <cstring>
using namespace std;
const int N = 26;
int a[N];
int main()
{
    int n, q;
    string s;
    cin >> n >> s;
    for (int i = 0; i < N; i++)
    {
        a[i] = i; // a[i]��ʾ��i����ĸ���滻�ɵ���ĸ��ʲô��ĸ
    }
    cin >> q;
    while (q--)
    {
        char c, d;//cҪת����d
        cin >> c >> d;
        int o = c - 'a';
        int p = d - 'a';
        for (int i = 0; i < 26; i++)
        {
            if (a[i] == o)
            {
                a[i] = p;
            }
        }
    }
        for (int i = 0; i < n; i++)
        {
            //int x = a[s[i] - 'a' + 1];
            cout << (char)(a[s[i] - 'a'] + 'a');
        }
    return 0;
}