#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, boys = 0, girls = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == 'B')
            boys++;
        else
            girls++;

       
        if (boys > 2 * girls)
        {
            cout << i << "\n"; 
            return;
        }
    }
   
    cout << n << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
        solve();

    return 0;
}
