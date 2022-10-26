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
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        long long b[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }

        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }

        vector<long long> one;
        vector<long long> zero;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                zero.push_back(b[i]);
            }

            else if(a[i]==1)
            {
                one.push_back(b[i]);
            }
        }

        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());

        if(zero.empty()||one.empty())
        {
            long long sum=0;
            for(int i=1;i<=n;i++)
            {
                sum+=b[i];
                
            }

            cout<<sum<<endl;
            continue;
        }

        if(zero.size()==one.size())
        {
            long long sum=0;
            int flag=-1;
            
            if(zero[0]>one[0])
            {
                flag=0;
            }
            else if(zero[0]<one[0])
            {
                flag=1;
            }


            if(flag==0||flag==-1)
            {
               
                sum+=one[0];
                sum+=2*zero[0];
                int i=1,j=1;
                while(i<zero.size())
                {
                    sum+=(2*one[i])+(2*zero[i]);
                    i++;
                }
            }

            if(flag==1)
            {
               
                sum+=zero[0];
                sum+=2*one[0];
                int i=1;
                while(i<zero.size())
                {
                    sum+=(2*zero[i])+(2*one[i]);
                    i++;
                }
            }

            cout<<sum<<endl;
            continue;
        }

        if(zero.size()<one.size())
        {
            long long sum=0;

            sum+=one[0];
            auto it=one.begin();
            one.erase(it);
            while(!one.empty()||!zero.empty())
            {
                if(!one.empty()&&!zero.empty())
                {
                    sum+=(2*zero.back())+(2*one.back());
                    zero.pop_back();
                    one.pop_back();
                }

                if(zero.empty()&&!one.empty())
                {
                    sum+=one.back();
                    one.pop_back();
                }
            }

            cout<<sum<<endl;
            continue;
        }

        if(zero.size()>one.size())
        {
            long long sum=0;

            sum+=zero[0];
            auto it=zero.begin();
            zero.erase(it);
            while(!one.empty()||!zero.empty())
            {
                if(!one.empty()&&!zero.empty())
                {
                    sum+=(2*zero.back())+(2*one.back());
                    zero.pop_back();
                    one.pop_back();
                }

                if(one.empty()&&!zero.empty())
                {
                    sum+=zero.back();
                    zero.pop_back();
                }
            }

            cout<<sum<<endl;
            continue;
        }


    }
}