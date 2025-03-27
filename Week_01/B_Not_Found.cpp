#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    bool isTrue = true;
    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';

        if (mp.count(ch) == 0)
        {
            cout << ch << endl;
            isTrue = false;
            break;
        }
    }
    if (isTrue)
    {
        cout << "None" << endl;
    }

    return 0;
}