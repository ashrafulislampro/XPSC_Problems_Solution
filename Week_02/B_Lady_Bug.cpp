#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i & 1)
        {
            cnt2 += a[i] == '0';
            cnt1 += b[i] == '0';
        }
        else
        {
            cnt1 += a[i] == '0';
            cnt2 += b[i] == '0';
        }
    }
    cout << (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2 ? "YES" : "NO") << '\n';
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