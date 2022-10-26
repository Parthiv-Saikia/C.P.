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
        vector<char> v[9];
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                char c;
                cin >> c;
                v[i].push_back(c);
            }
        }
        int flag = 0;
        for (int i = 1; i <= 8; i++)
        {
            int red = 0;
            for (char c : v[i])
            {
                if (c == 'R')
                {
                    red++;
                }
            }
            if (red == 8)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << 'R' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
}