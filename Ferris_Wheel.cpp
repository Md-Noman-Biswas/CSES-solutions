#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> arr;
    for(int i=0; i<n; i++){
        ll temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    cout << "\n";
    int i = 0;
    int j = n-1;
    int cnt = 0;
    bool greater = false;
    while(i <= j){
        if(arr[j] + arr[i] <= x){
            cnt++;
            i++;
            j--;
            greater = true;
        }
        else{
            greater = false;
            cnt++;
            j--;
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