#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=14,k=5;
    int i=4,a=(l-((l-((k-1)*i))))/(k-1),b=(l-((k-1)*i));
    cout<<b<<endl;
    cout<<a<<endl;

    /*#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int t;
    cin >> t;
    while (t--)
    {
       long long l,k;
       cin>>l>>k;


       if(l==k)
       {
        cout<<0<<endl;
        continue;
       }

        long long a=1,b=(l-(k-1));
        int minn=INT_MAX;
    
    
      long long i=1;
      
      
      while(b>0)
      {
        i++;
        b=(l-((k-1)*i));
        a= (l-((l-((k-1)*i))))/(k-1);
        
      }
      i-=1;
      b=(l-((k-1)*i));
      a= (l-((l-((k-1)*i))))/(k-1);
      if(abs(b-a)<minn)
      {
        minn=abs(b-a);
      }
      
    

    cout<<minn<<endl;



    }
}*/
}