#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, l = 0, r = 0;
    ll s, sum = 0, ans = 0;
    cin >> n >> s;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}