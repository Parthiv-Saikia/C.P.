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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int subham = 0, shivam = 0;
        int len = s.length();
        vector<int> ans(n);
        for (int i = 0; i < len; i++)
        {
            char ch = s[i];
            int dig = ch - '0';
            ans[i] = dig;
        }

        sort(ans.begin(), ans.end(), greater<int>());

        vector<int> final(n + 1);
        for (int i = 1; i <= n; i++)
        {
            final[i] = ans[i - 1];
        }

        for (int i = 1; i <= len; i++)
        {
            if (i % 2 == 1)
            {

                subham += final[i];
            }
            else if (i % 2 == 0)
            {

                shivam += final[i];
            }
        }

        if (subham == shivam)
        {
            cout << "SHUBHAM" << endl;
        }
        else if (subham > shivam)
        {
            cout << "SHIVAM" << endl;
        }
        else
        {
            cout << "SHUBHAM" << endl;
        }
    }
}