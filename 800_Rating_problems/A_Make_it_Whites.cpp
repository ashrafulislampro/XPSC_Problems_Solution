#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, white = 0, black = 0;
    cin >> n;
    string str;
    cin >> str;
    int left = 0, right = 0;
    bool f = true;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == 'B')
        {
            black++;
            if (f)
            {
                left = i;
                f = false;
            }
            right = i;
        }
    }
    for (int i = left; i <= right; i++)
    {
        char ch = str[i];
        if (ch == 'W')
        {
            black++;
        }
    }
    cout << black << endl;
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