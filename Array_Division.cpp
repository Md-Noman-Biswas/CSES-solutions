#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 2e5 + 10;

ll n, k;
vector<ll> arr(N);

bool isValid(ll mid){
    ll sub = 0;
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mid) return false;
        if(arr[i] + sum > mid){
            sub++;
            sum = 0;
        }
        sum += arr[i];
    }
    if(sum > 0) sub++;
    return sub <= k;
}

void solve(){
    cin >> n >> k;
    ll l = 0;
    ll h = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        h += arr[i];
    }
    ll ans;
    while(l <= h){
        ll mid = l + (h - l)/2;
        if(isValid(mid)){
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