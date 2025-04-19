#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    for (int i = 0; i < 5; i++)
    {
        (*min_element(arr.begin(), arr.end()))++;
    }

    cout << (arr[0] * arr[1] * arr[2]) << "\n";
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
