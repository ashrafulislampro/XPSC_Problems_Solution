#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    while (n--)
    {
        cin >> s;

        s = s.substr(0, s.size() - 2);
        cout << s + "i" << endl;
    }
    return 0;
}