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
       int n,m;
       cin>>n>>m;
       if(n==1||m==1)
       {
        cout<<n<<" "<<m<<endl;
        continue;
       }
        int one=0,two=0;
        int flag=0;
        for(int x=1;x<=m;x++)
        {
            one=0;two=0;
            flag=0;
            for(int y=1;y<=n;y++)
            {
                one=0;
                int a_1,b_1;
                int a_2,b_2;
                int a_3,b_3;
                int a_4,b_4;
                int a_5,b_5;
                int a_6,b_6;
                int a_7,b_7;
                int a_8,b_8;

                a_1=x+2; b_1=y-1;
                a_2=x+2; b_2=y+1;
                a_3=x-1; b_3=y-2;
                a_4=x+1; b_4=y-2;
                a_5=x-1; b_5=y+2;
                a_6=x+1; b_6=y+2;
                a_7=x-2; b_7=y-1;
                a_8=x-2; b_8=y+1;

                if(a_1>=1&&a_1<=m&&b_1>=1&&b_1<=n)
                {
                    one =1;
                }
                if(a_2>=1&&a_2<=m&&b_2>=1&&b_2<=n)
                {
                    one =1;
                }
                if(a_3>=1&&a_3<=m&&b_3>=1&&b_3<=n)
                {
                    one =1;
                }
                if(a_4>=1&&a_4<=m&&b_4>=1&&b_4<=n)
                {
                    one =1;
                }
                if(a_5>=1&&a_5<=m&&b_5>=1&&b_5<=n)
                {
                    one =1;
                }
                if(a_6>=1&&a_6<=m&&b_6>=1&&b_6<=n)
                {
                    one =1;
                }
                if(a_7>=1&&a_7<=m&&b_7>=1&&b_7<=n)
                {
                    one =1;
                }
                if(a_8>=1&&a_8<=m&&b_8>=1&&b_8<=n)
                {
                    one =1;
                }

                if(one==0)
                {
                    flag=1;
                    cout<<x<<" "<<y<<endl;
                    break;
                }
                


            }
            if(flag==1)
            {
                break;
            }
        }

        if(flag==0)
        {
            cout<<n<<" "<<m<<endl;
        }
    }
}