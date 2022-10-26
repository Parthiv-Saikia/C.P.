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
        long long arr[n];
        map<long long, int> mp;
        int maxfreq = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if ((it->second) > maxfreq)
            {
                maxfreq = it->second;
            }
        }

        cout << (maxfreq - 1) << endl;
    }
}