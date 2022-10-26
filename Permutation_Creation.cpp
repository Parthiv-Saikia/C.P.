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
        int a=0,b=1,i,j,i_end,j_end;
        if(n%2==0)
        {
            i=1;
            i_end=n/2;
            j=(n/2)+1;
            j_end=n;
        }
        else if(n%2==1)
        {
            i=1;
            i_end=(n/2)+1;
            j=(n/2)+2;
            j_end=n;
        }

       /* if(i>=i_end||j>=j_end)
        {
            cout<<-1<<endl;
            continue;
        }*/
        int num[n]={0};
        while(b<n||a<=n-1)
        {
            num[a]=i;
            num[b]=j;
            i++;
            j++;
            a+=2;
            b+=2;
        }
        int flag=0;
        for(int o=0;o<n-1;o++)
        {
            if(abs(num[o+1]-num[o])<2)
            {
                cout<<-1<<endl;
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
        for(int i=0;i<n;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
        }
    }

    
}