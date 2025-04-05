#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    set<string> st;
    cin.ignore();
    while (n--)
    {
        getline(cin, str);
        st.insert(str);
    }
    cout << st.size() << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}