#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    int pos = s.find('B');
    while (pos != string::npos)
    {
        // cout << pos << " " << s.size() << '\n';
        if (s.size() >= k)
        {
            cnt++;
            s.erase(pos, k - 1);
        }
        else
        {
            cnt++;
            s.erase();
        }
        pos = s.find('B', ++pos);
    }
    cout << cnt << '\n';
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