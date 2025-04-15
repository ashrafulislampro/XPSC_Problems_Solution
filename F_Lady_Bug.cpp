#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == '1' && b[i - 1] == '0')
        {
            a[i] = '0';
            b[i - 1] = '1';
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (b[i] == '0' && a[i - 1] == '1')
        {
            a[i - 1] = '0';
            b[i] = '1';
        }
    }

    if (a.find('1') == string::npos)
    {
        cout << "YES\n";
        return;
    }
    else
        cout << "NO\n";
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