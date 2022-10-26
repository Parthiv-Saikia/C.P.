#include <bits/stdc++.h>
using namespace std;
int lcs(string X, string Y, int m, int n)
{

    int L[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            L[i][j]=0;
        }
        
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    // return L[m][n];
    int ans = 0;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout<<L[i][j];
        }
        cout<<endl;
    }
    return ans;
}
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
        string a, b;
        cin >> a >> b;

        int z = a.length();
        int y = b.length();

        cout << lcs(a, b, z, y) << endl;
    }
}