#include <bits/stdc++.h>
using namespace std;

//  more effective answer
// y = b / c * c;
// if(a <= y){
//     cout<<y<<endl;
// }else{
//     cout<<-1<<endl;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, y;
    cin >> a >> b >> c;
    bool isTrue = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            y = i;
            isTrue = true;
            break;
        }
    }

    if (a == c || b == c)
    {
        cout << c << endl;
    }
    else if (isTrue)
    {
        cout << y << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}