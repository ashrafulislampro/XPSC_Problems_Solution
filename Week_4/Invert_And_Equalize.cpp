#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, sub_s_one = 0, sub_s_zero = 0;
    cin >> n;
    string s;
    cin >> s;
    auto it = s.find('1');
    auto it1 = s.find('0');

    bool f = false;
    if ((it == string::npos) || (it1 == string::npos))
    {
        cout << 0 << '\n';
        f = true;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1' && (s[i] != s[i + 1] || i + 1 == n))
            {
                sub_s_one++;
            }
            if (s[i] == '0' && (s[i] != s[i + 1] || i + 1 == n))
            {
                sub_s_zero++;
            }
        }
        }
    if (!f)
    {
        cout << min(sub_s_one, sub_s_zero) << '\n';
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