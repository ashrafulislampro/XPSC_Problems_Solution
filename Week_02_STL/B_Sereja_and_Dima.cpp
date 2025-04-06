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

    int it = 1, mx, serej = 0, dim = 0, left, right;
    while (!dq.empty())
    {
        left = dq.front();
        right = dq.back();
        mx = max(left, right);

        if (left == mx)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        if (it % 2 == 1)
        {
            serej += mx;
        }
        else
        {
            dim += mx;
        }
        it++;
    }
    cout << serej << " " << dim << endl;
    return 0;
}