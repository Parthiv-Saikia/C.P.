// PARTHIV SAIKIA
// 2112059
#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> brr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> brr[i];
    }

    vector<long long> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = (brr[i] - arr[i]);
    }

    int maxx = INT_MIN;
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] > maxx)
        {
            maxx = ans[i];
            index = i;
        }
    }
    cout << index << endl;
}