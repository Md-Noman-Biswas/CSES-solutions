#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    bool flag = false;
    if(n ==3 || n == 2){
        cout << "NO SOLUTION" << "\n";
        return;
    }
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            cout << i << " ";
        }
    }
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            cout << i << " ";
        }
    }
    cout << "\n";
}
int main(){
    solve();
}