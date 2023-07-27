#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        /*
        number of wasys to place 2 knights.
        1st knight can be placed n*n
        2nd knight in n*(n-1) ways
        to remove duplicate we dvivide it by 2
        this is basically (n^2C2) 
        */
        ll temp = (i*i * (i*i - 1))/2;
        /*
        //number of 2*3 or 3*2 grids, these grids 
        creates L shape. knight attacks in L shape areas
        in a grid of 2*3 there are 2 possible ways to play knights
        diagonally. same goes for 3*2.
        thats why 4 multiplied.
        */
        ll temp2 = 4*(i-1)*(i-2);
        ans = temp - temp2;
        cout << ans << "\n";
    }
}
int main(){
    solve();

}