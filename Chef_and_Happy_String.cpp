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
        string s;
        cin >> s;
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        int n = s.length();
        vector<int> v;
        for (int i = 0; i <= s.length(); i++)
        {
            if (st.find(s[i]) != st.end() && i <= (n - 3))
            {
                v.push_back(i);
            }
        }

        if (v.empty())
        {
            cout << "Sad" << endl;
            continue;
        }
        int flag = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int a = v[i];
            if ((st.find(s[a]) != st.end()) && (st.find(s[a + 1]) != st.end()) && (st.find(s[a + 2]) != st.end()))
            {
                cout << "Happy" << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "Sad" << endl;
        }
    }
}