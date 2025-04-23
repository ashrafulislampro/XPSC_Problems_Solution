#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n > 3)
    {
        cout << (n + n - 1 + n - 2) << '\n';
    }
    else
    {
        cout << -1 << '\n';
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