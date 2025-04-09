#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool f = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.count(v[i]))
        {
            cout << i + 1 << endl;
            f = true;
            break;
        }
        st.insert(v[i]);
    }

    if (!f)
        cout << 0 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}