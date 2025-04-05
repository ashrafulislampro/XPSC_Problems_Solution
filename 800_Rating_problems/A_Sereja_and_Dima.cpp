#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int serej = 0, dim = 0, who = 1, mx;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back();
        mx = max(left, right);

        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        if (who % 2 == 1)
        {
            serej += mx;
        }
        else
        {
            dim += mx;
        }
        who++;
    }
    cout << serej << " " << dim << endl;
    return 0;
}