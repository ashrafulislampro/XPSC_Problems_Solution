#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                continue;
            if (arr[i] == 1)
            {
                bool isTrue = true;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i] == 1 && arr[j] == 1)
                    {
                        count++;
                        arr[i] = 0;
                        arr[j] = 0;
                        isTrue = false;
                    }
                }
                if (isTrue)
                {
                    count++;
                    arr[i] = 0;
                }
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
        }
    return 0;
}