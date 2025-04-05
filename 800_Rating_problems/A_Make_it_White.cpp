#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int firstPos = -1, lastPos = -1;
    firstPos = str.find('B');
    lastPos = str.rfind('B');

    cout << lastPos - firstPos + 1 << endl;
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