#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> v(n);
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even++;
            }
        }

        cout<<(even)<<endl;




    }
}