#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, res;
    cin >> a >> b;
    if (a == b)
    {
        cout << 1 << endl;
    }
    else if (a > b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (b - a) + 1 << endl;
    }

    return 0;
}