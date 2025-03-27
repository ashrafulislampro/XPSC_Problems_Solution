#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int itr = 2, sum = 0;
    while (itr--)
    {
        if (a >= b)
        {
            sum += a;
            a--;
        }
        else
        {
            sum += b;
            b--;
        }
    }
    cout << sum << endl;
    return 0;
}