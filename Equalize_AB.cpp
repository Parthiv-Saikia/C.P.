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
       long long a,b,x;
       cin>>a>>b>>x;

       if(a==b)
       {
        cout<<"YES"<<endl;
        continue;
       }

       int turns=-2;
       long long temp_a=a,temp_b=b;
       if(a>b)
       {
        a=b;
        b=temp_a;
       }
       temp_a=a;
       temp_b=b;
        int flag=0;
       while(turns<=2)
       {
        if(a<b)
        {
        a+=x;
        b-=x;
        turns++;}
        if(a==b)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        if(a>b)
        {
            turns++;
            a-=x;
            b+=x;
        }
       }

       if(flag==0)
       {
        cout<<"NO"<<endl;
        continue;
       }
    }
}