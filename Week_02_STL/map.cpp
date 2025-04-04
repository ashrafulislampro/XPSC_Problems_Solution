#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp = {{1, 10}, {2, 20}, {3, 35}};

    // cout << mp.begin()->first << " " << mp.begin()->second << endl;
    // cout << mp.end()->first << " " << (--mp.end())->second << endl;
    mp.insert({4, 45});
    mp.insert({5, 55});
    mp.insert({6, 65});
    // mp.erase(2);
    // cout << mp.size() << endl;
    // cout << mp.empty() << endl;
    // mp.clear();
    cout << mp.lower_bound(3)->first << " " << mp.lower_bound(3)->second << endl;
    cout << mp.upper_bound(4)->first << " " << mp.upper_bound(4)->second << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}