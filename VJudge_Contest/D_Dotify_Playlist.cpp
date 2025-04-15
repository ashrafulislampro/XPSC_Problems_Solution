#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, K, L;
    cin >> N >> K >> L;
    priority_queue<int> pq;

    for (int i = 0; i < N; i++)
    {
        int duration, lang;
        cin >> duration >> lang;
        if (lang == L)
        {
            pq.push(duration);
        }
    }

    if (pq.size() < K)
    {
        cout << -1 << "\n";
        return;
    }

    int total = 0;
    while (K--)
    {
        total += pq.top();
        pq.pop();
    }

    cout << total << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
