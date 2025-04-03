#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int freq[n] = {0};
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
            if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1)
            {
                flag = true;
                cout << i + 1 << endl;

                break;
            }
        }
        if (!flag)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}