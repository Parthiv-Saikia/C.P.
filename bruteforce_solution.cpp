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
        int p = 0;
        // set<long long> ans;
        while (1)
        {
            long long num = pow(3, p);
            if (num > r)
            {
                break;
            }
            p++;
        }
        int q = 0;
        while (1)
        {
            long long num = pow(5, q);
            if (num > r)
            {
                break;
            }
            q++;
        }
        int count = 0;
        for (int j = 0; j <= q; j++)
        {
            int flag = 0;
            if (1)
            {

                long long first = (pow(3, 0)) * (pow(5, j));
                long long last = (pow(3, p)) * (pow(5, j));
                if (first >= l && last <= r)
                {
                    count += p + 1;
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                continue;
            }

            
            for (int i = 0; i <= p; i++)
            {
                int one = pow(3, i);
                int two = pow(5, j);
                long long pro = one * two;

                if (pro > r)
                {
                    break;
                }
                if (pro >= l && pro <= r)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}