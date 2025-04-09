#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    stack<int> st, st2;
    map<int, int> mp;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'b')
        {
            mp[i] = 1;
            if (st.empty())
            {
                continue;
            }

            mp[st.top()] = 1;
            st.pop();
        }
        else if (s[i] == 'B')
        {
            mp[i] = 1;
            if (st2.empty())
            {
                continue;
            }

            mp[st2.top()] = 1;
            st2.pop();
        }
        else
        {
            if (islower(s[i]))
            {
                st.push(i);
            }
            else
            {
                st2.push(i);
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (mp[i] == 0)
        {
            cout << s[i];
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
