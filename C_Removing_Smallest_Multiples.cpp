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
        s = ' ' + s;
        long long ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n && s[j] != '1'; j += i)
            {
                if (s[j] == '0')
                {
                    ans += i;
                    s[j] = '2';
                }
            }
        }
        cout << ans << endl;
    }
}