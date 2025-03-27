#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    string str1, str2;
    bool isTrue;
    while (t--)
    {
        cin >> n;
        cin >> str1 >> str2;
        isTrue = true;
        for (int i = 0; i < n; i++)
        {
            if (str1[i] != str2[i] && ((str1[i] == 'R' && str2[i] == 'G') || (str1[i] == 'R' && str2[i] == 'B') || (str1[i] == 'G' && str2[i] == 'R') || (str1[i] == 'B' && str2[i] == 'R')))
            {

                cout << "NO" << endl;
                isTrue = false;
                break;
            }
        }
        if (isTrue)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}