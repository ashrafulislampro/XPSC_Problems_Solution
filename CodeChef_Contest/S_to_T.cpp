#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s, s2;
    cin >> s;
    cin >> s2;
    // cout << s << " " << s2 << '\n';
    vector<int> v;
    bool f = false;
    if (s == s2)
    {
        cout << 0 << '\n';
        f = true;
    }
    else
    {
        if (s[0] != s2[0])
        {
            cout << -1 << '\n';
            f = true;
        }
        else
        {
            for (int i = n - 1, j = n - 1; i, j >= 0;)
            {
                if (s[i] == s2[j])
                {
                    i--, j--;
                    continue;
                }
                if (s2[j] != s[i])
                {
                    v.push_back(i);
                    // j--, i--;
                }
                j--, i--;
            }
        }
    }
    if (!f && v.size() > 0)
    {
        cout << v.size() << '\n';
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
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
        solve();
    return 0;
}