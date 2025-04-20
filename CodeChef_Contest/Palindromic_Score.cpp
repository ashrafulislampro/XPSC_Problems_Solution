#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int mx = max({x, y, z});
    int mn = min({x, y, z});
    int mid = (x + y + z) - mx - mn;

    if (mid % 2 != 0 && mn % 2 != 0)
    {
        cout << mid + mn - 1 << '\n';
    }
    else
    {
        cout << mid + mn << '\n';
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