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
        // int *a=new int(n+1);
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;
        // int *b=new int(m+1);
        int b[m + 1];
        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        int minn = 0;
        int min_ele = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] < 0)
            {
                if (a[i] < min_ele)
                {
                    min_ele = a[i];
                    minn = i;
                }
            }
        }

        int sum1 = 0, sum2 = 0;
        for (int i = 1; i < minn; i++)
        {
            sum1 += a[i];
        }

        for (int i = minn + 1; i <= n; i++)
        {
            sum2 += a[i];
        }

        vector<int> large;
        if (sum1 >= sum2)
        {
            /*for(int i=1;i<minn;i++)
            {
                large.push_back(a[i]);
            }*/
            large.push_back(sum1);
        }

        else if (sum2 > sum1)
        {
            /*for(int i=minn+1;i<=n;i++)
            {
                large.push_back(a[i]);
            }*/
            large.push_back(sum2);
        }

        for (int i = 1; i <= m; i++)
        {
            if (b[i] < 0)
            {
                continue;
            }
            else
            {
                large.push_back(b[i]);
            }
        }

        int sum = 0;
        for (auto it : large)
        {
            sum += it;
        }
        cout << sum << endl;
    }
}