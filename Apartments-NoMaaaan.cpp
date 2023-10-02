#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n);
    vector<ll> brr(m);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for(int j=0; j<m; j++) cin >> brr[j];
    sort(brr.begin(), brr.end());
    int cnt = 0;
    int i=0, j = 0;
    while(i < n && j < m){
        if(abs(arr[i] - brr[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(arr[i] - brr[j] > 0){
            j++;
        }else{
            i++;
        }
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}