#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s, tmp;
    cin >> s;
    map<char, int> mp;

    for (auto val : s)
        mp[val]++;
    int val = mp['1'], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += val;
        if (s[i] == '1')
        {
            cnt--;
        }
        if (s[i] == '0')
            cnt++;
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