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
        string s;
        cin >> s;
        char c = '9';
        for (int i = s.length() - 1; i >= 0; i--)
        {
            c = min(c, s[i]);
            if (s[i] > c && s[i] != '9')
            {
                s[i] = s[i] + 1;
            }
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}