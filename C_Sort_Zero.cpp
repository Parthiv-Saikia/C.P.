#include <bits/stdc++.h>
using namespace std;
int CountUnique(int arr[], int n)
{
    vector<int> v(arr, arr + n);
    sort(v.begin(), v.end());
    int count = unique(v.begin(), v.end()) - v.begin();
    if (count == 0)
    {
        return n;
    }
    return abs(count);
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
        int arr[n];
        int maxx=INT_MIN;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            maxx=max(mp[arr[i]],maxx);
        }

        
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        if(maxx==n)
        {
            cout<<0<<endl;
            continue;
        }
        if (mp[arr[n - 1]] > 1)
        {
            int count = CountUnique(arr, n);
            cout << count << endl;
            continue;
        }

        int i = n - 2;
        while (i >= 0)
        {
            if (arr[i + 1] < arr[i]||mp[arr[i]]>1)
            {
                int size = i + 1;
                int count = CountUnique(arr, size);
                cout << count << endl;
                break;
            }
            i--;
        }
    }
}