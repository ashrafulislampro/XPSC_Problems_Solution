#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, l = 0, r = 0, q, cnt = 0, mx_cnt = 0;
    cin >> n >> k >> q;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        if (x <= q)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (cnt >= k && cnt > mx_cnt)
        {
            mx_cnt = cnt;
        }
    }
    if (mx_cnt < k)
    {
        cout << 0 << '\n';
        return;
    }
    long long ans = 0;
    cnt = 0;
    for (int i = 0; i < n;) {
        if (v[i] <= q) {
            int j = i;
            while (j < n && v[j] <= q) j++;
            int len = j - i;
            if (len >= k) {
                int x = len - k + 1;
                ans += (1LL * x * (x + 1)) / 2;
            }
            i = j;
        } else {
            i++;
        }
    }
    cout << ans << '\n';
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