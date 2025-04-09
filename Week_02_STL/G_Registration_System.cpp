#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string str, s;
    vector<string> vec;
    map<string, int> mp;
    while (t--)
    {
        cin >> str;
        if (mp.count(str))
        {
            mp[str]++;           
            vec.push_back(str + to_string(mp[str]));
        }
        else
        {
            mp[str] = 0;
            vec.push_back("OK");
        }
    }
    for (auto val : vec)
    {
        cout << val << endl;
    }
    return 0;
}