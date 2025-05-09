#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n, s, ans = 0, sum = 0, l = 0, r = 0;
    cin >> n >> s;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
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