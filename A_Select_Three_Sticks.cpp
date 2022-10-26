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
       map<int,int> mp;
       int freq=0;
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
        cin>>v[i];
        mp[v[i]]++;
        if(mp[v[i]]>freq)
        {
            freq++;
        }
       }

       if(freq>=3)
       {
        cout<<0<<endl;
        continue;
       }

       else if(freq==2)
       {
        int dig=0;
        for(auto it=mp.begin();it!=mp.end();++it)
        {
            if(it->second==freq)
            {
                dig=it->first;
                break;
            }

        }
        int val[n];
        for(int i=0;i<n;i++)
        {
            val[i]=abs(v[i]-dig);
        }
        sort(val,val+n);
        cout<<(val[0]+val[1]+val[2])<<endl;
            continue;
       }
       else if(freq==1)
       {
        int diff[n-1];
        for(int i=0;i<n-1;i++)
        {
            diff[i]=abs(v[i]-v[i+1]);
            sort(diff,diff+(n-1));
            cout<<(diff[0]+diff[1])<<endl;
            continue;
        }
       }




    }
}