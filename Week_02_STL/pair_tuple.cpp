#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> student = make_pair("Ash", 10);
    // // cout << student.first << " " << student.second << endl;
    // auto [name, roll] = student;

    // cout << name << " " << roll << endl;
    // int n;
    // cin >> n;
    // pair<string, int> students[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << students[i].first << " " << students[i].second << endl;
    // }

    // for (auto [x, y] : students)
    // {
    //     cout << x << " " << y << endl;
    // }

    tuple<string, int, string> tp = make_tuple("Ash", 15, "0130");

    // cout << get<0>(tp) << " " << get<1>(tp) << " " << get<2>(tp) << endl;
    // auto [name, roll, phone] = tp;
    // cout << name << " " << roll << " " << phone << '\n';

    // pair<string, pair<int, string>> pr = make_pair("Ashraful", make_pair(12, "013455"));
    pair<string, pair<int, string>> pr = {"Ash", {30, "455"}};

    cout << pr.first << " " << pr.second.first << " " << pr.second.second << endl;

    return 0;
}