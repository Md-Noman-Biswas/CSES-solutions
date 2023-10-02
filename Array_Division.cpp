#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 2e5+7;

ll n, k;
vector<int> arr(N);

bool valid(ll mid){
    ll sub = 0;
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mid){
            return false;
        }
        if(arr[i] + sum > mid){
            sub++;
            sum = 0;
        }
        sum += arr[i];
    }
    if(sum > 0){
        sub++;
    }
    return sub <= k;
}

void solve(){
    cin >> n >> k;
    ll l = 0;
    ll h = 2e5 + 9;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        h += arr[i];
    }
    
    ll ans = 0;

    while(l <= h){
        ll mid = (l + h)/2;
        if(valid(mid)){
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