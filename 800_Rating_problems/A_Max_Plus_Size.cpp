#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (auto &it : arr)
        cin >> it;

    ll sz_1 = 0, sz_2 = 0, mx1 = 0, mx2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        sz_1++;
        mx1 = max(mx1, arr[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        sz_2++;
        mx2 = max(mx2, arr[i]);
    }
    cout << max(sz_1 + mx1, sz_2 + mx2) << endl;
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