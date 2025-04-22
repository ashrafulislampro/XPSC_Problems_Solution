#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, y, sum = 0, el;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> el;
        if ((el * x) < y)
        {
            sum += (el * x);
        }
        else
        {
            sum += y;
        }
    }
    cout << sum << '\n';
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