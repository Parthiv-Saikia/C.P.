#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int alice = 1, bob = n - 1;
        string t;
        t += s[0];
        char flag = 'b';
        while (alice <= bob)
        {
            if (flag == 'b')
            {
                char ch = s[bob];
                if (ch == '0')
                {
                    t = t + '0';
                }
                else if (ch == '1')
                {
                    t = '1' + t;
                }
                bob--;
                flag = 'a';
                continue;
            }

            if (flag == 'a')
            {
                char ch = s[alice];
                if (ch == '0')
                {
                    t = '0' + t;
                }
                else if (ch == '1')
                {
                    t = t + '1';
                }
                alice++;
                flag = 'b';
                continue;
            }
        }
        cout << t << endl;
    }
}