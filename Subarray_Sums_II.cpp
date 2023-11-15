#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, ll> mp;
    ll sum = 0;
    ll cnt = 0;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        sum += x;
        if(sum == k) cnt++;
        if(mp.find(sum - k) != mp.end()){
            cnt += mp[sum - k];
        }
        mp[sum]++;
    }
    cout << cnt << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}