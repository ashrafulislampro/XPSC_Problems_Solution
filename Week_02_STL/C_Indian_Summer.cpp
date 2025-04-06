#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    set<string> st;
    string str;
    cin.ignore();
    while (t--)
    {
        getline(cin, str);
        st.insert(str);
    }
    cout << st.size() << endl;

    return 0;
}