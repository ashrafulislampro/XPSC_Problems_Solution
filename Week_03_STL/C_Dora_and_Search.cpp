#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    multiset<int> mls;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        mls.insert(v[i]);
    }
    int l = 1, r = n;
    while (l < r)
    {
        if (v[l] == *mls.begin() || v[l] == *mls.rbegin())
        {
            auto it = mls.find(v[l]);
            mls.erase(it);
            l++;
        }

        else if (v[r] == *mls.begin() || v[r] == *mls.rbegin())
        {
            auto it = mls.find(v[r]);
            mls.erase(it);
            r--;
        }
        else
        {
            cout << l << " " << r << endl;
            return;
        }
    }

    cout << -1 << '\n';
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