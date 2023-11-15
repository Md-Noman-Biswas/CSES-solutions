#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 2e5 + 7;
ll n, t;
vector<ll> arr(N);

bool isValid(ll mid){
    ll temp = 0;
    for(int i=0; i<n; i++){
        temp += mid/arr[i];
        if(temp >= t){
            break;
        }
    }
    return temp >= t;
}


void solve(){
    cin >> n;
    cin >> t;
    ll x = -1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        x = max(arr[i], x);
    }
    ll l = 0;
    ll r = x * t;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(isValid(mid)){
            ans = mid;
            r = mid - 1;
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