#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k, len;
    cin >> k;
    string s;
    cin >> s;
    len = s.size();
    if (k >= 2 && len == k && s[0] != s[len - 1])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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