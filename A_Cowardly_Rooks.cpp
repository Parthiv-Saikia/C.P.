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
        int n, m;
        cin >> n >> m;
        int chess[n + 1][n + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                chess[i][j] = 0;
            }
        }
        int I[m + 1];
        int J[m + 1];
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            chess[x][y] = 1;
            I[i] = x;
            J[i] = y;
        }
        int crt = 0;
        for (int i = 1; i <= m; i++)
        {
            int flag = 0;
            int x = I[i];
            int y = J[i];
            if (x > 1)
            {
                int flag1 = 0;
                int row = x - 1;
                while (row >= 1)
                {
                    flag1 = 0;
                    for (int j = 1; j <= n; j++)
                    {
                        if (chess[row][j] == 1)
                        {
                            flag1 = 1;

                            break;
                        }
                    }
                    if (flag1 == 0)
                    {
                        flag = 1;
                    }
                    row--;
                }
                
            }
            if (x < n)
            {
                int flag2 = 0;
                int row = x + 1;
                while (row <= n)
                {
                    flag2 = 0;
                    for (int j = 1; j <= n; j++)
                    {
                        if (chess[row][j] == 1)
                        {

                            flag2 = 1;
                            break;
                        }
                    }
                    if (flag2 == 0)
                    {
                        flag = 1;
                    }
                    row++;
                }
            }

            if (y < n)
            {
                int flag3 = 0;
                int coloumn = y + 1;
                while (coloumn <= n)
                {
                    flag3 = 0;
                    for (int j = 1; j <= n; j++)
                    {
                        if (chess[j][coloumn])
                        {

                            flag3 = 1;
                            break;
                        }
                    }
                    if (flag3 == 0)
                    {
                        flag = 1;
                    }
                    coloumn++;
                }
            }

            if (y > 1)
            {
                int coloumn = y - 1;
                int flag4 = 0;
                while (coloumn >= 1)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (chess[j][coloumn])
                        {

                            flag4 = 1;
                            break;
                        }
                    }
                    if (flag4 == 0)
                    {
                        flag = 1;
                    }
                    coloumn--;
                }
            }
            if (flag == 1)
            {
                crt++;
            }
        }
        if (crt == 1)
        {
            cout << "YES" << endl;
        }
        else if (crt != 1)
        {
            cout << "NO" << endl;
        }
    }
}