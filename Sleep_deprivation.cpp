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
       long long l,k;
       cin>>l>>k;


       if(l==k)
       {
        cout<<0<<endl;
        continue;
       }
        long long i=1;
        long long a=i,b=l-((k-1)*i);
        int minn=abs(b-a);
    
    
      
      
      
      while(b>0)
      {
        i++;
        b=l-((k-1)*i);
        if(b<0) break;
        a= i;
        if(abs(b-a)<minn)
      {
        minn=abs(b-a);
      }
        
      }
      i-=1;
      b=l-((k-1)*i);
      a= i;
      
      
    

    cout<<minn<<endl;



    }
}