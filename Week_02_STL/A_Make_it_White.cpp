#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, leftPos = -1, rightPos = -1;
    cin >> n;
    string str;
    cin >> str;

    leftPos = str.find('B');
    rightPos = str.rfind('B');

    cout << rightPos - leftPos + 1 << endl;
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