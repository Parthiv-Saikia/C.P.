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
        int a, b, c;
        cin>>a>>b>>c;
        int sum1 = a + b, sum2 = b + c, sum3 = c + a;
        if (sum1 % 2 == 1 || sum2 % 2 == 1 || sum3 % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}