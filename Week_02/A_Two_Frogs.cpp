#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    if (a % 2 != b % 2 || n == 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (a == 1 && b == 2)
        {
            cout << "NO" << endl;
        }
        else if (a == n && b == n - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
