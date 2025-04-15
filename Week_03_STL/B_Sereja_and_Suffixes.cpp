#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, pos;
    cin >> n >> m;
    vector<int> arr(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    set<int> st;
    for (int i = n; i >= 1; i--)
    {
        st.insert(arr[i]);
        cnt[i] = st.size();
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> pos;
        cout << cnt[pos] << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}