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
       int d[n+1];
       for(int i=1;i<=n;i++)
       {
            cin>>d[i];
       }
        int flag=0;
       vector<int> a;
       a.push_back(d[1]);
       for(int i=2;i<=n;i++)
       {
        int temp=d[i];
        int one=a[i-2]-temp;
        int two=a[i-2]+temp;
        if(one>0&&two>0&&(one!=two))
        {
            flag=1;
            break;
        }
        if(one>0&&two>0&&(one==two))
        {
            a.push_back(one);
        }
        if((one*two)<=0)
        {
            int positive;
            if(one>=0)
            {
                positive=one;
            }
            else if(two>=0)
            {
                positive=two;
            }
            a.push_back(positive);
        }

        if((one*two)>0&&(one!=two))
        {
            flag=1;
            break;
        }

       }

       if(flag==1)
       {
        cout<<-1<<endl;
        continue;
       }
       for(auto it:a)
       {
        cout<<it<<" ";
       }
       cout<<endl;
    }
}