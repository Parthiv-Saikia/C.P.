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
        long long pro=1;
        int negative=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v[i]=a;
            pro*=a;
            if(a<0)
            {
                negative++;
            }
        }
        if(pro>=0)
        {
            cout<<0<<endl;
            continue;
        }

        else
        {
            cout<<1<<endl;
            continue;
        }

    }

}