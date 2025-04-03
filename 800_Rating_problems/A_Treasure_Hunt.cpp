#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, x, y, a;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a;

        if ((a % (x + y)) >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}