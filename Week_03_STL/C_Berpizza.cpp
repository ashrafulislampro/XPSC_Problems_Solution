#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, pos_no = 1;
    ;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mls;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            st.insert({pos_no, money});
            mls.insert({money, -pos_no});
            pos_no++;
        }
        else if (type == 2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase({pos, money});
            mls.erase({money, -pos});
        }
        else
        {
            int pos = -mls.rbegin()->second, money = mls.rbegin()->first;
            ans.push_back(pos);
            mls.erase(--mls.end());
            st.erase({pos, money});
        }
    }
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}