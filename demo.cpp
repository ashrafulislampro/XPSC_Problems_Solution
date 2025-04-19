cin >> s;
map<int, char> mp;
map<char, int> mp2;
if (s.size() != n)
{
    cout << "NO\n";
}
else
{
    bool f = false;
    for (int j = 1; j <= n; j++)
    {
        mp[j] = s[j - 1];
        mp2[s[j - 1]] = v[j];
    }

    for (int j = 1; j <= n; j++)
    {

        if (mp2[mp[j]] != v[j])
        {
            cout << "NO\n";
            f = true;
            break;
        }
    }
    if (!f)
    {
        cout << "YES\n";
    }
}