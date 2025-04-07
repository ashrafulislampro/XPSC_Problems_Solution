#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, s;
    int t;
    cin >> t;
    map<string, string> ans, tmp;
    while (t--)
    {
        cin >> a >> b;

        if (tmp.find(a) != tmp.end())
        {
            s = tmp[a];
            ans[s] = b;
            tmp.erase(a);
            tmp[b] = s;
        }
        else
        {
            ans[a] = b;
            tmp[b] = a;
        }
    }
    cout << ans.size() << endl;
    for (auto [key, val] : ans)
    {
        cout << key << " " << val << endl;
    }
    return 0;
}