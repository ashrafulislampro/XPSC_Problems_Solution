#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int grid[n+1][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    map<int, int> mp, m;
    for (int i = 1; i <= n; i++)
    {
        mp[grid[i][n - 1]] = i;
        m[grid[i][n - 1]]++;
    }
    int idx = 0, val;
    for (auto &p : m)
    {
        if (p.second == 1)
            idx = p.first;
        else
            val = p.first;
    }
    // cout << idx << " " << val << endl;
    for (int i = 1; i < n; i++)
    {
        cout << grid[mp[idx]][i] << " ";
    }
    cout << val << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}