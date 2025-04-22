#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int max_Sum = 0;
    int current_Sum = 0;
    int min_Ops = 0;
    int tmp_Ops = 0;

    // for (int i = 0; i < n; ++i)
    // {
    //     current_Sum += v[i];
    //     if (v[i] < 0)
    //         tmp_Ops++;

    //     if (current_Sum < 0)
    //     {
    //         current_Sum = 0;
    //         tmp_Ops = 0;
    //     }
    //     else if (current_Sum > max_Sum)
    //     {
    //         max_Sum = current_Sum;
    //         min_Ops = tmp_Ops;
    //     }
    //     else if (current_Sum == max_Sum)
    //     {
    //         min_Ops = min(min_Ops, tmp_Ops);
    //     }
    // }

    // cout << min_Ops << "\n";
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