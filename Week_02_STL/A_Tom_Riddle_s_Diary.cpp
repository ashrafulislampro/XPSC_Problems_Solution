#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> ans(n);
    // map<string, bool> tmp;
    set<string> st;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (st.find(str) != st.end())
        {
            st.insert(str);
            ans[i] = "YES";
        }
        else
        {
            st.insert(str);
            ans[i] = "NO";
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}