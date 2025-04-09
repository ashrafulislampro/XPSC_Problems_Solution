#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, mx = INT_MIN, len, cnt = 0;
    cin >> t;

    map<int, int> mp;
    while (t--)
    {
        cin >> x;
        mp[x]++;
    }

    for (auto [key, val] : mp)
    {
        if (val > mx)
        {
            mx = val;
        }
    }

    cout << mx;
    return 0;
}