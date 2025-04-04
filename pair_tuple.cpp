#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = make_pair("Ash", 10);
    // cout << student.first << " " << student.second << endl;
    auto [nam, roll] = student;

    cout << "Student = " << nam << " " << roll << endl;

    return 0;
}