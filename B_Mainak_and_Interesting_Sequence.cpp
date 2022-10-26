#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

       
       // if ((n > m) || ((m & 1) && (~(n & 1))))
       if(n>m||(n%2==0 &&m%2==1))
        {
            cout << "NO" << endl;
            continue;
        }

        else
        {
            cout << "YES" << endl;
            if (n % 2 == 1)
            {
                
                for (int i = 1; i <= n - 1; i++)
                {
                    cout << "1 ";
                }
                cout << (m - (n - 1)) << endl;
                
            }
            else
            {
                for (int i = 1; i <= n - 2; i++)
                {
                    cout <<"1 ";
                }

                cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
                
            }
        }
    }
}
