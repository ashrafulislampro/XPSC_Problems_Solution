#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '0')
                continue;

            bool fl = 1;
            for (int k = 0; k < i; k++)
            {
                if (arr[k][j] == '0')
                {
                    fl = 0;
                    break;
                }
            }

            if (fl)
                continue;

            fl = 1;
            for (int k = 0; k < j; k++)
            {
                if (arr[i][k] == '0')
                {
                    fl = 0;
                    break;
                }
            }

            if (fl == 0)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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