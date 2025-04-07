#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int len = str.size();

    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            str += (str[len - 1] == 'a' ? "b" : "a");
            break;
        }
        if (str[i] == str[i + 1])
        {
            if (str[i] == 'a')
            {
                str = str.substr(0, i + 1) + "b" + str.substr(i + 1, len - i - 1);
                break;
            }
            else
            {
                str = str.substr(0, i + 1) + "a" + str.substr(i + 1, len - i - 1);
                break;
            }
        }
    }

    cout << str << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}