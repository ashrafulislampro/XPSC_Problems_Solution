#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, count;
    cin >> t;
    string str;
    while (t--)
    {
        cin >> n >> k;
        cin >> str;
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            int ele = str[i] - 'a';
            freq[ele]++;
        }
        count = 0;
        for (int i = 0; i < 26; i++)
        {
            char ch = i + 'a';

            if (freq[ch - 'a'] % 2 != 0)
            {
                count++;
            };
        }
        if (k < count - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}