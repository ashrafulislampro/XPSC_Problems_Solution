#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string p, s;
    cin >> p >> s;
    int n = p.size(), m = s.size();

    vector<pair<int, char>> v1, v2;
    int idx = 0;
    while (idx < n)
    {
        char curr = p[idx];
        int cnt = 0;
        while (idx < n)
        {
            if (curr != p[idx])
            {
                break;
            };
            cnt++;
            idx++;
        }
        v1.push_back({cnt, curr});
    }
    idx = 0;
    while (idx < m)
    {
        char curr = s[idx];
        int cnt = 0;
        while (idx < m)
        {
            if (curr != s[idx])
            {
                break;
            };
            cnt++;
            idx++;
        }
        v2.push_back({cnt, curr});
    }
    bool isTrue = true;

    if(v1.size() != v2.size()){
        isTrue = false;
    }else{
        for (int i = 0; i < v2.size(); i++)
    {
        if (!(v2[i].first >= v1[i].first && v2[i].first <= (v1[i].first * 2)) || (v1[i].second != v2[i].second))
        {
            isTrue = false;
            break;
        }
    }
    }

    if (isTrue)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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