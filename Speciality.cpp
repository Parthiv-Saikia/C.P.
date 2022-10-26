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
        int x, y, z;
        cin >> x >> y >> z;
        int maxx = max(x, y);
        maxx = max(maxx, z);
        if (maxx == x)
        {
            cout << "Setter" << endl;
            continue;
        }

        else if (maxx == y)
        {
            cout << "Tester" << endl;
            continue;
        }

        else if (maxx == z)
        {
            cout << "Editorialist" << endl;
        }
    }
}