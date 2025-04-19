#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, coin_cnt = 1;
    cin >> n;

    while (n > 3)
    {
        n /= 4;
        coin_cnt *= 2;
    }
    cout << coin_cnt << endl;
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