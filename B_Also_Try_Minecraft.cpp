#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int n,m;
    cin>>n>>m;
    
    int arr[n+1];
    long long diff[n+1]={0};
    long long rev[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=2;i<=n;i++)
    {
        diff[i]=diff[i-1]+max(0,arr[i-1]-arr[i]);
    }

    for(int i=n-1;i>=0;i--)
    {
        rev[i]=rev[i+1]+max(0,arr[i+1]-arr[i]);
    }

    while(m--)
    {
        int s,t;
        cin>>s>>t;
        
        cout<<(s<t? diff[t]-diff[s]:rev[t]-rev[s])<<endl;
    }
   
}