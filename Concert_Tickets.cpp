#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    multiset<ll> st;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        auto it = st.upper_bound(x);
        if(it == st.begin()){
            cout << -1 << "\n";
        }else{
            cout << *--it << "\n";
            st.erase(it);
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}