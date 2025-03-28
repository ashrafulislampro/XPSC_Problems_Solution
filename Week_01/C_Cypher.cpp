#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t, n, sz;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        vector<pair<int, string>> pr;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> sz >> str;
            pr.push_back({sz, str});
        }

        for (int i = 0; i < n; i++)
        {
            int ele = arr[i];
            auto parent = pr[i];
            int len = parent.first;
            string strs = parent.second;

            for (int i = 0; i < len; i++)
            {
                char ch = strs[i];

                if (ch == 'D')
                {
                    ele++;
                    if (ele > 9)
                    {
                        ele = 0;
                    }
                }
                else
                {
                    ele--;
                    if (ele < 0)
                    {
                        ele = 9;
                    }
                }
            }
            temp.push_back(ele);
        }
        for (int num : temp)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}