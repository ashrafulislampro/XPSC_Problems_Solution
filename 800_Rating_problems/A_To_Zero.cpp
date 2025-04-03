#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    long long ans = 0;
    if (n % 2 == 1 && k % 2 == 1)
    {
        n -= k;
        ans++;
        k--;
    }
    else if (n % 2 == 0 && k % 2 == 1)
    {
        k -= 1;
    }

    ans += (n + k - 1) / k;
    cout << ans << endl;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}