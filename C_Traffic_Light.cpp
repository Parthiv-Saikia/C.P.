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
        char c;
        cin >> n;
        cin >> c;
        string s;
        cin >> s;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        string st = s + s;
        vector<int> ans;
        vector<int> colour[3];
        for (int i = 0; i < (2 * n); i++)
        {
            if (st[i] == 'g')
            {
                colour[2].push_back(i);
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (s[j] == c)
            {
                colour[1].push_back(j);
            }
        }

        for (int i : colour[1])
        {
            auto it = upper_bound(colour[2].begin(), colour[2].end(), i);
            int dig = (*it);
            int diff = dig - i;
            ans.push_back(diff);
        }

        sort(ans.begin(), ans.end());
        cout << ans.back() << endl;
    }
}