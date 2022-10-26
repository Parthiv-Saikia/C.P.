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

        vector<int> books(n);
        for (int i = 0; i < n; i++)
        {
            cin >> books[i];
        }
        int mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans += max(mx, books[i]);
            }
            if (s[i] == '0' || mx > books[i])
            {
                mx = books[i];
            }
        }
        cout << ans << endl;
    }
}