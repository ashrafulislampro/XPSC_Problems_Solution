#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, x;
    cin >> n >> m;
    vector<int> v(n + 1), v2(m + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> v2[i];
    }
    int cnt = 0;
    for (int i = 1, l = 1; i <= m;)
    {
        if (l <= n && v[l] < v2[i])
        {
            cnt++, l++;
        }
        else
        {
            cout << cnt << " ";
            i++;
        };
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}