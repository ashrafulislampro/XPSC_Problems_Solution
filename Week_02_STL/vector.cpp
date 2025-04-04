#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(5);
    // vec.pop_back();
    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // vec.clear();
    // cout << vec.empty() << endl;
    // vec.assign(10, 2);
    // vec.resize(5);
    // vec.resize(5, 4);
    // cout << *vec.begin() << endl;

    // cout << *vec.end() << endl;

    // cout << *(vec.end() - 1) << endl;
    // reverse(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(), greater<int>());
    // sort(vec.begin(), vec.end());
    cout << *min_element(vec.begin(), vec.end()) << endl;
    cout << *max_element(vec.begin(), vec.end()) << endl;

    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}