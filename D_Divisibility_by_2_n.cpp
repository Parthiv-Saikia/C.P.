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
        int count = 0;
        for (int i : v)
        {
            int num = i;
            while (num % 2 == 0)
            {
                count++;
                num /= 2;
            }
        }
        if (count >= n)
        {
            cout << 0 << endl;
            continue;
        }
        vector<int> two;
        for (int i = 1; i <= n; i++)
        {
            int c = 0;
            int num = i;
            while (num % 2 == 0)
            {
                c++;
                num /= 2;
            }
            two.push_back(c);
        }
        int diff = n - count;

        sort(two.begin(), two.end(), greater<int>());

        int sum = 0;
        for (int i : two)
        {
            sum += i;
        }
        if (sum < diff)
        {
            cout << -1 << endl;
            continue;
        }

        int ans = 0;
        for (int i : two)
        {
            if (diff <=0)
            {
                break;
            }
            diff -= i;
            ans++;
        }
        cout << ans << endl;
    }
}