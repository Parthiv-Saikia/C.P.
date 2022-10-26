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
        int n, k;
        cin >> n >> k;
        long long K[k + 1];
        vector<long long> diff;
        for (int i = 1; i <= k; i++)
        {
            cin >> K[i];

            if (i == 1)
            {
                diff.push_back(K[i]);
            }
            else
            {
                long long last = diff.back();
                long long lastt;
                lastt = abs(K[i]) - abs(last);
                diff.push_back(abs(lastt));
            }
        }

        vector<long long> copy = diff;
        sort(copy.begin(), copy.end());
        cout << (copy == diff ? "Yes" : "No") << endl;
    }
}