#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0, it = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        it++;
        if (it == 2)
        {
            count++;
        }
        if (it == 7)
        {
            it = 0;
        }
    }
    cout << count << "\n";
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