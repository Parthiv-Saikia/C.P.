// PARTHIV SAIKIA
// 2112059
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
        long long l, r;
        cin >> l >> r;
        int j = 0;
        unordered_set<long long> ans;
        while (1)
        {
            int Q = pow(5, j);
            if (Q > r)
            {
                break;
            }

            int i = 0;
            while (1)
            {
                long long one = pow(3, i);
                long long two = pow(5, j);
                if ((one * two) > r)
                {
                    break;
                }
                if ((one * two) >= l && (one * two) <= r)
                {
                    ans.insert(one * two);
                }
                i++;
            }
            j++;
        }
        cout << ans.size() << endl;
    }
}