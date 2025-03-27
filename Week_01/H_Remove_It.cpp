#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, ele;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> vec2;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] != x)
            vec2.push_back(vec[i]);
    }

    int len = vec2.size();
    if (len == 0)
    {
        cout << endl;
    }
    else
    {
        cout << vec2[0];
        for (int i = 1; i < len; i++)
        {
            cout << " " << vec2[i];
        }
    }
    return 0;
}