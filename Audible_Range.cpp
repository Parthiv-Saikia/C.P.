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
        int x;
        cin >> x;
        if ((x >= 67) && (x <= 45000))
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}