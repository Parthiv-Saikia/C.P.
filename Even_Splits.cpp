#include <bits/stdc++.h>
using namespace std;
void Copy(string &s,char output[])
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=output[i];
    }
    
}
void exchange(string &s, int a, int b)
{
    cout<<s<<"two"<<endl;
    char output[s.length()];
    int i = 0;
    output[0] = s[a];
    cout<<output<<"one"<<endl;
    while (i != a&&i<a)
    {
        output[i + 1] = s[i];
        i++;
    }
    char ch = s[b];
    i = b + 1;
    if (i == s.length())
    {
        for (int u = a + 1; u < s.length(); u++)
        {
            output[u] = s[u];
            
        }
        for(int z=0;z<s.length();z++)
        {
            cout<<output[z];
        }
        cout<<"vvv"<<endl;
        Copy(s,output);
        cout<<"Funct 1.1 = "<<s<<endl;
        cout<<"Funct 1.1.1 = "<<output<<endl;
        return;
    }

    while (i < s.length())
    {
        output[i - 1] = s[i];
        i++;
    }
    output[s.length() - 1] = ch;
    Copy(s,output);
    cout<<"Funct 1 = "<<s<<endl;
    return;
}

int find_j(string &s)
{
    int j=s.length()-1;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            j=i;
        }
        if(s[i]=='0')
        {
            break;
        }
    }
    return j;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        /*string gar;
        getline(cin, gar);*/
        string s;
        cin >> s;
        //cout<<"S = "<<s<<endl;
        int zero = 0, one = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                zero = 1;
            }

            
        }
        if(zero==0)
        {
            cout << s << endl;
            cout<<"HI1"<<endl;
            continue;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                one = 1;
            }

            
        }

        if ( one==0)
        {
            cout << s << endl;
            cout<<"HI2"<<endl;
            continue;
        }

        int i = 0, j = s.length() - 1;

        while (i < j)
        {
            if (i == 0 && s[0] == '1')
            {
                int a = i, b = j, A = 0, B = j;
                while (a != b)
                {
                    if (s[a] == '0')
                    {
                        A = a;
                    }
                    if (s[b] == '1')
                    {
                        B = b;
                    }
                    if (s[a] != '0')
                    {
                        a++;
                    }
                    if (s[b] != '1')
                    {
                        b--;
                    }
                    if(s[a]=='0'&&s[b]=='1')
                    {
                        break;
                    }
                }
                exchange(s,A,B);
                i++;
                //j=s.length()-1;
                j=find_j(s);
            }

            if(i!=0&&s[i]==1)
            {
                int a=i-1,b=i;
                exchange(s,a,b);
                j=find_j(s);
            }
            i++;
        }
        cout<<s<<endl;
        cout<<s.length()<<endl;
       /* for(int i=0;i<s.length();i++)
        {
            cout<<endl;
        }*/
    }
}