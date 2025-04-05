#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // Normal 2D Vector implementation
    // vector<vector<int>> vec(n, vector<int>(n, 5));

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2D -> vector into vector

    vector<vector<int>> vec;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> arr;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        vec.push_back(arr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}