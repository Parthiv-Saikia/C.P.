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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<int> a;
        vector<int> b;

        a.push_back(arr[1]);
        char flag = 'a';
        for (int i = 2; i <= n; i++)
        {
            int curr = arr[i];
            int prev = arr[i - 1];
            if (curr < prev)
            {
                if (flag == 'a')
                {
                    a.push_back(curr);
                }
                else if (flag == 'b')
                {
                    b.push_back(curr);
                }
            }

            else if (curr > prev)
            {
                if (flag == 'a')
                {
                    b.push_back(curr);
                    flag = 'b';
                }
                else if (flag == 'b')
                {
                    a.push_back(curr);
                    flag = 'a';
                }
            }
        }

        if (a.empty() || b.empty())
        {
            cout << -1 << endl;
            continue;
        }

        cout << a.size() << endl;
        for (auto it : a)
        {
            cout << (it) << " ";
        }
        cout << endl;

        cout << b.size() << endl;
        for (auto it : b)
        {
            cout << (it) << " ";
        }
        cout << endl;
    }
}