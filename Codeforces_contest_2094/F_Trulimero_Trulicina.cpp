#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int grid[n][m];
    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            grid[i][j] = curr;
            curr++;
            if (curr > k)
            {
                curr = 1;
            }
        }
    }
    if (m % k == 0)
    {
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            rotate(grid[i], grid[i] + idx, grid[i] + m);
            idx++;
            if (idx == m)
                idx = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }
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