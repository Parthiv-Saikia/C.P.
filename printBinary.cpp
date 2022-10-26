#include<bits/stdc++.h>
using namespace std;


void print_binary(int num)
{
    for(int i=10;i>=0;--i)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    for(char c='A';c<='E';c++)
    {
        cout<<c<<" ";
        print_binary(int(c));
    }

    for(char c='a';c<='e';c++)
    {
        cout<<c<<" ";
        print_binary(int(c));
    }

    char chh='A';
    cout<<char(chh|' ')<<endl;

    cout<<char(chh+32)<<endl;

    
 
}