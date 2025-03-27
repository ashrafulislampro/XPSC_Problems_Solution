#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string result = "";

    while (num != 0)
    {
        int rem = num % 10;
        num /= 10;
        result.insert(0, to_string(rem));
    }
    int len = result.size();
    if (len == 4)
    {
        cout << result << endl;
    }
    else
    {

        for (int i = 0; i < 4 - len; i++)
        {
            result.insert(0, to_string(0));
        }
        cout << result << endl;
    }

    return 0;
}