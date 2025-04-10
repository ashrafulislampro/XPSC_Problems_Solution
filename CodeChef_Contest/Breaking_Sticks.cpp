#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, mx;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx += v[i] - 1;
    }

    cout << mx << endl;
}
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
