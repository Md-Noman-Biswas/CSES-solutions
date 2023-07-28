#include<bits/stdc++.h>
using namespace std;
void solve(){
    long n;
    cin >> n;
    long cnt = 0;
    /*
    if the big num can be represented as
    12345 * 10^4
    ->12345*2^4*5^4
    thus number of times we can devide the number by 5 is the result 
    */
    for(int i=5; (n/i)>=1; i*=5){
        cnt += (n/i);
    }
    cout << cnt << "\n";
}
int main(){
    solve();
}