#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    set<int> st;
    vector<int> ans(2 * n + 1);
    for (int i = 1; i <= 2 * n; i++)
    {
        st.insert(i);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            ans[i + j] = x;
            if (st.find(x) != st.end())
            {
                st.erase(x);
            }
        }
    }
    ans[1] = *st.begin();
    for (int i = 1; i <= 2 * n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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