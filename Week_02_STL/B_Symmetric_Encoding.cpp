#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<char> st;
    map<char, char> mp;
    for (int i = 0; i < n; i++)
    {
        st.insert(str[i]);
    }
    vector<char> arr(st.begin(), st.end());

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        mp[arr[i]] = arr[j];
        mp[arr[j]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        str[i] = mp[str[i]];
    }

    cout << str << endl;
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