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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        if (n >= 1)
        {
            ans += n;
        }
        if (n >= 2)
        {
            ans += (n - 1);
        }
        if (n >= 3)
        {
            int size = 3;
            while (size <= n)
            {
                for (int i = 0; (i + (size - 1)) < n; i++)
                {
                    vector<int> org(v.begin() + i, v.begin() + i + 3);

                    for (auto it = org.begin() + 1; it != org.end(); it++)
                    {
                        if (*it < *(it - 1))
                        {
                            *(it - 1) = -(*(it - 1));
                        }
                    }
                    vector<int> copy(org.begin(), org.end());
                    sort(copy.begin(), copy.end());

                    if (copy == org)
                    {
                        ans++;
                    }
                }
                size++;
            }
        }
        cout << ans << endl;
    }
}