#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    vector<string> v(m);

    string str, first, second;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        stringstream ss(str);
        ss >> first >> second;
        mp[second + ";"] = first;
    }
    
    for (int i = 0; i < m; i++)
    {
        getline(cin, str);
        stringstream ss(str);
        ss >> first >> second;
        v[i] = first + " " + second + " #" + mp[second];
    }

    for (auto ch : v)
    {
        cout << ch << endl;
    }
    return 0;
}