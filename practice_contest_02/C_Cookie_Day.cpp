#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, mn_cookies = INT_MAX, x, tmp;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= k)
        {
            tmp = x % k;
            if (tmp < mn_cookies)
                mn_cookies = tmp;
        }
    }

    cout << (mn_cookies != INT_MAX ? mn_cookies : -1) << '\n';
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