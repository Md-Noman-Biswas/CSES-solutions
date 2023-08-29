#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int i = 0;
    ll max_ending_here = 0;
    ll current_max = INT_MIN;
    while(i < n){
        max_ending_here += arr[i];
        current_max = max(current_max, max_ending_here);
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
        i++;
    }
    cout << current_max << "\n";

}


int main(){
    solve();
}