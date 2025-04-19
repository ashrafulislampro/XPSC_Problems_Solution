#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    cin >> x;
    cin.ignore();
    string s;
    while (x--)
    {
        cin >> s;
        map<int, char> mp1;
        map<char, int> mp2;
        bool f = false;
        if (s.size() != n)
        {
            cout << "NO\n";
            f = true;
        }
        else
        {

            for (int j = 1; j <= n; j++)
            {
                mp1[v[j]] = s[j - 1];
                mp2[s[j - 1]] = v[j];
            }
            
            for (int j = 1; j <= n; j++)
            {
                if (mp1[v[j]] == s[j - 1] && mp2[s[j - 1]] == v[j])
                {
                    continue;
                }
                else
                {
                    cout << "NO\n";
                    f = true;
                    break;
                };
            }
        }

        if (!f)
        {
            cout << "YES\n";
        }
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

// NO
// NO
// YES
// NO
// YES
// YES
// NO
// YES
// YES
// NO
// YES
// NO
// NO
// YES
// NO
// NO
// NO
// NO
// YES
// YES
// YES
// YES
// NO
// NO
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// YES
// NO
