#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> even_arr;
    vector<int> odd_arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even_arr.push_back(arr[i]);
        }
        else
        {
            odd_arr.push_back(arr[i]);
        }
    }

    int len = even_arr.size();
    int len2 = odd_arr.size();

    long long sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += even_arr[i];
    }

    if (len2 % 2 != 0)
    {
        sort(odd_arr.begin(), odd_arr.end());
        for (int i = 1; i < len2; i++)
        {
            sum += odd_arr[i];
        }
    }
    else
    {
        for (int i = 0; i < len2; i++)
        {
            sum += odd_arr[i];
        }
    }
    cout << sum << endl;
    return 0;
}