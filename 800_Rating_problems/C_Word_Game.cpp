#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, m = 3;
    cin >> n;

    map<string, vector<int>> mp;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            string str;
            cin >> str;
            mp[str].push_back(i);
        }
    }

    // for (auto [x, y] : mp)
    // {
    //     cout << x << " -> ";
    //     for (auto val : y)
    //     {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> ans(m + 1);

    for (auto [x, y] : mp)
    {
        vector<int> v = y;
        if (v.size() == 1)
        {
            ans[v[0]] += 3;
        }
        if (v.size() == 2)
        {
            ans[v[0]]++;
            ans[v[1]]++;
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