#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, left, right, mx, total = 0, count = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> vec(n), v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            left = i;
            right = n - i - 1;
            mx = max(left, right);
            if (right == mx && right != left)
            {
                total += mx;
                count++;
                v.push_back(right - left);
            }
            else
            {
                total += mx;
            }
        }
        else if (s[i] == 'R')
        {
            left = i;
            right = n - i - 1;
            mx = max(left, right);
            if (left == mx && left != right)
            {
                total += mx;
                count++;
                v.push_back(left - right);
            }
            else
            {
                total += mx;
            }
        }
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    for (int i = n - 1, j = 0; i >= 0; i--)
    {
        if (i >= count - 1)
        {
            vec[i] = total;
        }
        else
        {
            total = total - v[j];
            vec[i] = total;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
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