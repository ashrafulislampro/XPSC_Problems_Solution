#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m = 3;
    cin >> n;
    string s;
    map<string, vector<int>> mp;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> s;
            mp[s].push_back(i);
        }
    }
    vector<int> ans(m + 1);
    for (auto [x, y] : mp)
    {
        vector<int> vec = y;

        if (vec.size() == 1)
        {
            ans[vec[0]] += 3;
        }
        if (vec.size() == 2)
        {
            ans[vec[0]]++;
            ans[vec[1]]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        cout << ans[i] << " ";
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