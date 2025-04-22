#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, mx, x;
    cin >> n >> m;
    set<int> st;
    map<int, int> mp_1, mp_2;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        st.insert(x);
        mp_1[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        mp_2[x]++;
    }
    long long cnt = 0;
    for (auto val : st)
    {
        if (mp_1.count(val) && mp_2.count(val))
        {
            cnt += (1ll * mp_1[val] * mp_2[val]);
        }
    }
    cout << cnt << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}