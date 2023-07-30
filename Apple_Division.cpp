#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    ll sum = 0;
    vector<ll> arr(n+1);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    ll temp = 0;
    ll ans = INT_MAX;
    for(int mask = 0; mask < (1<<n); mask++){
        temp = 0;
        for(int i=0; i<n; i++){
            if(mask & (1<<i)){
                temp += arr[i];
            }
        }
        ll group1 = sum - temp;
        ll group2 = temp;
        ll diff = abs(group1 - group2);
        ans = min(ans, diff);
    }
    cout << ans << "\n";
}
int main(){
    solve();
}