#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    multiset<int> mls;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        mls.insert(x);
    }
    int days = 0;
    for (int i = 1; i <= n; i++)
    {
        auto it = mls.lower_bound(i);
        if (it == mls.end())
        {
            break;
        }
        days++;
        mls.erase(it);
    }
    cout << days << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}