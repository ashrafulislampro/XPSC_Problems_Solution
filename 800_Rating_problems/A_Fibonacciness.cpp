#include <bits/stdc++.h>
using namespace std;
void solve(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[3]>>arr[4];
    set<int> st;
    int a = arr[0] + arr[1];
    st.insert(a);
    a = arr[3] - arr[1];
    st.insert(a);
    a = arr[4] - arr[3];
    st.insert(a);

    if(st.size() == 1){
        cout<<3<<endl;
    }else if(st.size() == 2){
        cout<<2<<endl;
    }else{
        cout<<1<<endl;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}