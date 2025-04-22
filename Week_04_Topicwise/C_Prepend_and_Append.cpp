#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, cnt = 0, i = 0, j;
    cin >> n;
    string s;
    cin >> s;
    j = n - 1;
    while (i < j)
    {
        if ((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1'))
        {
            cnt += 2;
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    cout << n - cnt << '\n';
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