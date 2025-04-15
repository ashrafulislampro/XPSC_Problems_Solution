#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    ll n, k, a, b, x;
    cin >> n >> k;
    vector<ll> v(n + 5);
    map<int, set<int>> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        mp[x].insert(i);
    }

    while (k--)
    {
        cin >> a >> b;
        ll left = -1, right = -1;
        if (!mp.count(a) || !mp.count(b))
        {
            cout << "NO\n";
        }
        else
        {
            left = *mp[a].begin();
            right = *mp[b].rbegin();
            if (left > right)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
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