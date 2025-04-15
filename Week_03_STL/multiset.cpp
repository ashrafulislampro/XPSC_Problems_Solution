#include <bits/stdc++.h>
using namespace std;

void solve()
{
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> mls;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mls.insert(x);
        st.insert(x);
    }

    // auto it1 = st.begin();
    // // it1++;
    // // it1++;
    // // auto it = mls.begin() + 2;
    // cout << *it1 << endl;
    
    for (auto it : mls)
    {
        cout << it << " ";
    }
    return 0;
}