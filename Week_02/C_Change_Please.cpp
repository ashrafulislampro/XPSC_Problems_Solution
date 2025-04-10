#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin >> x;
    cout << (((100 - x) / 10) * 10) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}