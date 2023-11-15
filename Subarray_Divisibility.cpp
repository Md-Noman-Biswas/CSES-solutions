#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll k;
    cin >> k;
    unordered_map<ll, ll> mp;
    ll sum = 0;
    ll cnt = 0;
    for(int i=0; i<k; i++){
        ll x;
        cin >> x;
        x %= k;
        sum += x;
        sum = (sum + k) % k;
        if(sum == 0) cnt++;
        if(mp.find(sum) != mp.end()){
            cnt += mp[sum];
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