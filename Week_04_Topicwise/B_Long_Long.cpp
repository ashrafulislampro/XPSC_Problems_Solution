#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, cnt = 0, x;
    long long sum = 0;
    cin >> n;
    vector<int> v(n);
    bool f = false;
    while (n--)
    {
        cin >> x;
        sum += abs(x);
        if (x < 0 && !f)
        {
            cnt++;
            f = true;
        }
        if (x > 0)
        {
            f = false;
        }
    }

    cout << sum << " " << cnt << '\n';
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