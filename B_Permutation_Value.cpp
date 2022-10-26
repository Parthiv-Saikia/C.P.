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
       int i=1;
       vector<int> ans;
       while(i<=n)
       {
        ans.push_back(i);
        i+=2;
       }
       i=2;
       while(i<=n)
       {
        ans.push_back(i);
        i+=2;
       }
        if(n%2==0)
        {
            ans.pop_back();
            ans.pop_back();
            ans.push_back(n);
            ans.push_back(n-2);
        }
       for(int it:ans)
       {
        cout<<it<<" ";
       }
       cout<<endl;
    }
}