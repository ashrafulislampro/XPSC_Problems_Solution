#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Ashraful";
    str.push_back('I');
    str.pop_back();

    // str.clear();
    cout << str.front() << endl;
    cout << str.back() << endl;
    cout << str.empty() << endl;
    cout << str.substr(1, 3) << endl;
    cout << str.substr(3) << endl;

    return 0;
}