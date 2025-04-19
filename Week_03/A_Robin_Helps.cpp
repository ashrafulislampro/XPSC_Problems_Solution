#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, k, cnt = 0, gold = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= k)
        {
            gold += x;
        }
        if (x == 0 && gold > 0)
        {
            gold--;
            cnt++;
        }
    }
    cout << cnt << '\n';
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