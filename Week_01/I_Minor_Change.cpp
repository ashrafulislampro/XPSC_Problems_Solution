#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int count = 0, len = str1.size();
    if (str1 == str2)
    {
        cout << 0 << endl;
    }
    else
    {

        for (int i = 0; i < len; i++)
        {
            if (str1[i] != str2[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}