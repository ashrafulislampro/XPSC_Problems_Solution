#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, mx, l = 0, r = 0, tmp;
    cin >> n >> m;
    vector<int> v(n), v2(m), v3;
    for (auto &x : v)
        cin >> x;
    for (auto &x : v2)
        cin >> x;

    for (auto val : v)
    {
        v3.push_back(val);
    }
    for (auto val : v2)
    {
        v3.push_back(val);
    }
    sort(v3.begin(), v3.end());
    for (auto x : v3)
    {
        cout << x << " ";
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