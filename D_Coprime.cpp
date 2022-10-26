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
        vector<int> v[1001];
        unordered_set<int> s;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x].push_back(i);
            s.insert(x);
        }
        vector<int> pairs[1001];
        for (int i : s)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (__gcd(i, j) == 1)
                {
                    pairs[i].push_back(j);
                }
            }
        }
        int ans = 0;
        for (int i : s)
        {
            for (int j : pairs[i])
            {
                if (!v[j].empty())
                {
                    ans = max(ans, (v[i].back() + v[j].back()));
                }
            }
        }
        if (ans == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << ans << endl;
    }
}