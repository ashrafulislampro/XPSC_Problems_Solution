#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int sz = s.size(), ans = sz - 1, rem = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] != '0')
        {
            ans = min(ans, rem + sz - i - 1), rem++;
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