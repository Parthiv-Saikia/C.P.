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
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
        cin>>v[i];
       }
       int i=0;
       while(i+1<n&&v[i+1]>=v[i]) i++;

       while(i+1<n&&v[i+1]<=v[i]) i++;

       if(i+1==n) cout<<"YES"<<endl;

       else cout<<"NO"<<endl;
    }
}