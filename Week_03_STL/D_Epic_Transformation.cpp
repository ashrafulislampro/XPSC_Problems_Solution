#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for (auto [key, val] : mp)
    {
        pq.push(val);
    }

    while (!pq.empty())
    {
        if (pq.size() < 2)
        {
            break;
        }
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        a--, b--;
        if (a >= 1)
        {
            pq.push(a);
        }
        if (b >= 1)
        {
            pq.push(b);
        }
    }

    int ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << "\n";
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