#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int lt = 0, serej_cnt = 0, dim_cnt = 0;

    for (int i = 0; i < n - lt;)
    {

        if ((i + lt) % 2 == 0)
        {
            if (vec[i] >= vec[n - 1 - lt])
            {
                serej_cnt += vec[i];
                i++;
            }
            else
            {
                serej_cnt += vec[n - 1 - lt];
                lt++;
            }
        }
        else
        {
            if (vec[i] >= vec[n - 1 - lt])
            {
                dim_cnt += vec[i];
                i++;
            }
            else
            {
                dim_cnt += vec[n - 1 - lt];
                lt++;
            }
        }
    }
    cout << serej_cnt << " " << dim_cnt << endl;
    return 0;
}