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
       cin>>n;
       int arr[n+1];
       for(int i=1;i<=n;i++)
       {
        cin>>arr[i];
       }

       vector<int> v[n+1];

       for(int i=1;i<=n;i++)
       {
        v[arr[i]].push_back(i);
       }

       for(int i=1;i<=n;i++)
       {
        if(v[i].size()<=1) cout<<v[i].size()<<" ";
        else
        {
            int cnt=1;
            for(int j=1;j<v[i].size();j++)
            {
                int gap=v[i][j]-v[i][j-1];
                gap--;
                if(gap%2==0) cnt++;
            }
            cout<<cnt<<" ";
        }
       }


       cout<<endl;

    }
}       