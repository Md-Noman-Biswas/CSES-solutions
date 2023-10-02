#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    int q; 
    cin >> q;
    int ans = 0;

    vector<int> arr(n+1,0);
    vector<int> pref(n+1,0);

    for(int i=1; i<=n; i++){
        cin >> arr[i];
        pref[i] = pref[i-1]^arr[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << (pref[l-1] ^ pref[r]) << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}