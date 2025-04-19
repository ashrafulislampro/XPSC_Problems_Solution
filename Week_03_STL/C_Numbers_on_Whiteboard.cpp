#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    multiset<int> was;
    for (int i = 1; i <= n; i++)
    {
        was.insert(i);
    }

    vector<pair<int, int>> ans;

    for (int i = 1; i < n; i++)
    {
        auto it = was.end();
        it--;
        int a = *it;
        was.erase(it);

        it = was.end();
        it--;
        int b = *it;
        was.erase(it);

        was.insert((a + b + 1) / 2);
        ans.push_back({a, b});
    }

    cout << *was.begin() << "\n";
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << "\n";
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
    {
        solve();
    }
    return 0;
}
