#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> subsets;
void generate(vector<ll> subset, int i, vector<ll> &arr, int n){
    if(i == n){
        subsets.push_back(subset);
        return;
    }
    generate(subset, i+1, arr, n);
    subset.push_back(arr[i]);
    generate(subset, i+1, arr, n);
    subset.pop_back();
}
void solve(){
    int n;
    cin >> n;
    ll sum = 0;
    ll Asum = 0;
    vector<ll> arr(n+1);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        Asum += arr[i];
    }
    vector<ll> empty;
    generate(empty, 0, arr, n);
    ll ans = INT_MAX;
    for(auto subset: subsets){
        sum = 0;
        for(auto ele: subset){
            sum += ele;
        }
        ll group1 = Asum - sum;
        ll group2 = sum;
        ll diff = abs(group1 - group2);
        ans = min(diff, ans);
    }
    cout << ans << "\n";
}
int main(){
    solve();
}