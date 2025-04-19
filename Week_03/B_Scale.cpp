#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, k;
    cin >> n >> k;

    char Arr[n][n];

    for (auto &row : Arr)
        for (char &c : row)
            cin >> c;

    for (int i = 0; i < n; i += k)
    {
        for (int j = 0; j < n; j += k)
        {
            cout << Arr[i][j];
        }
        cout << "\n";
    }
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
