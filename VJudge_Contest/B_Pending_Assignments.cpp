#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, z;
    cin >> x >> y >> z;
    if ((x * y) <= (z * 24 * 60))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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