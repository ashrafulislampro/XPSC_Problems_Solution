#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    string a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        mp[{a, b}] = true;
    }
    // for (auto value : mp)
    // {
    //     pair<string, string> pr = value.first;
    //     bool ok = value.second;
    //     cout << pr.first << " " << pr.second << " " << ok << endl;
    //     // cout<<value.first.first<<" "<<value.first.second<<" "<<value.second<<endl;
    // }

    cout << mp.size() << endl;
    return 0;
}