#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll n;
ll b4_mid;

bool predicate(ll mid){
    ll cnt = 0;
    for(ll i=1; i<=n; i++){
        cnt += min(mid/i, n);
    }
    return cnt >= b4_mid;
}

void solve(){

    cin >> n;
    b4_mid = (n*n + 1)/2;
    vector<ll> arr;
    ll l = 1;
    ll h = n * n;
    ll ans = 0;
    while(l <= h){
        ll mid = l + (h - l)/2;
        if(predicate(mid)){
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}