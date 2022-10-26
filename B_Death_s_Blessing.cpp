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
        vector<pair<long long, long long>> v(n);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
            ans += v[i].second;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            ans += v[i].first;
        }

        sort(v.begin(), v.end());

        ans -= v[n - 1].first;
        cout << ans << endl;
    }
}