#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, w, box_width;

    cin >> n >> box_width;

    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        st.insert(w);
    }

    int height = 1, space_left = box_width;

    while (!st.empty())
    {
        auto it = st.upper_bound(space_left);
        

        if (it != st.begin())
        {
            it--;
            int val = *it;
            space_left -= val;
            
            st.erase(it);
        }
        else
        {
            space_left = box_width; 
            height++;  
            
        }
    }

    cout << height << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}