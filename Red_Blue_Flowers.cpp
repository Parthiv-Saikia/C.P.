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
        vector<int> red(n);
        for (int i = 0; i < n; i++)
        {
            cin >> red[i];
        }
        vector<int> blue(n);
        for (int i = 0; i < n; i++)
        {
            cin >> blue[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int sum1, sum2 = 0;
        int r = 0, b = 0;
        sum1 += red[0];
        sum2 += blue[0];
        for (int i = 1; i < n; i++)
        {
            if(red[i]<sum2)
            {
                sum1+=red[i];
                sum2+=blue[i];
            }
            else if(red[i]>sum2)
            {
                b+=sum2;
                r+=red[i];
            }
            else if(red[i]==sum2)
            {
                if(red[i]<=blue[i])
                {
                    r+=sum1;
                    b+=blue[i];
                }
            }
        }
        cout<<min(r,b)<<endl;
    }
}