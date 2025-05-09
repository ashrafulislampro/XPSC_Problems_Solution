#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, ft_part = "", sc_part = "";
    getline(cin, s);
    vector<string> v;
    stringstream strem(s);
    string word;
    char dot = '.';
    while (getline(strem, word, dot))
    {
        v.push_back(word);
    }
    ft_part = v[0];
    sc_part = v[1];
    int len = ft_part.size();

    if (*(--ft_part.end()) == '9')
    {
        cout << "GOTO Vasilisa." << '\n';
    }
    else
    {
        int digit = *sc_part.begin() - '0';
        if (digit >= 5)
        {
            auto it = --ft_part.end();
            int lt_digit = *it - '0';
            ft_part.erase(it);
            char lt_dit = (lt_digit + 1) + '0';
            ft_part.push_back(lt_dit);
            cout << ft_part << '\n';
        }
        else
        {
            cout << ft_part << '\n';
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}