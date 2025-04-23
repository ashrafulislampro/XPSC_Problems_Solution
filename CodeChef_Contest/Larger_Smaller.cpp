#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, rem;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    rem = mx - mn;
    cout << (rem != 0 ? rem - 1 : 0) << '\n';
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