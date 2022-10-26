#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int t;
    cin >> t;
    string gar;
    getline(cin,gar);
    while (t--)
    {
       string s;
       cin>>s;
       ll n,m,cost;
       n=s.length();
       vector<ll> index[26];
       vector<ll> ans;
       m=0;


       for(ll i=0;i<n;i++)
       {
        index[s[i]-97].push_back(i+1);
       }

        cost=abs(s[0]-s[n-1]);

        if(s[n-1]>s[0])
        {
            for(int i=s[0]-97;i<=s[n-1]-97;i++)
            {
                ll l=index[i].size();
                m+=l;

                for(ll j=0;j<l;j++)
                {
                    ans.push_back(index[i][j]);
                }
            }
        }

        else
        {
            for(ll i=s[0]-97;i>=s[n-1]-97;i--)
            {
                ll l=index[i].size();
                m+=l;

                for(ll j=0;j<l;j++)
                {
                    ans.push_back(index[i][j]);
                }
            }
        }


        cout<<cost<<" "<<m<<endl;
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }
}