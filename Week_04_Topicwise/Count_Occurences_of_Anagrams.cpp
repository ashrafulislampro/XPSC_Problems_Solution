#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string pat, txt;
    cin >> txt >> pat;
    int cnt = 0, len = txt.size(), k = pat.size();
    if (len < k)
    {
        cout << 0 << '\n';
        return;
    }
    vector<int> freq_pat(26, 0), freq_wnd(26, 0);
    for (char ch : pat)
        freq_pat[ch - 'a']++;
    // first window
    for (int i = 0; i < k; i++)
        freq_wnd[txt[i] - 'a']++;

    if (freq_pat == freq_wnd)
        cnt++;

    // slid the window
    for (int i = k; i < len; i++)
    {
        freq_wnd[txt[i] - 'a']++;
        freq_wnd[txt[i - k] - 'a']--;
        if (freq_pat == freq_wnd)
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