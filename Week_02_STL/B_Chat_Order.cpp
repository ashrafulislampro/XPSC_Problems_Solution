#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string str;
    vector<string> vec(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[vec[i]] != 1)
        {
            cout << vec[i] << endl;
            mp[vec[i]] = 1;
        }
    }

    return 0;
}
