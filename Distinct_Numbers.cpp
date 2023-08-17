#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    set<int> st;
    while(n--){
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    cout << st.size() << "\n";
}
int main(){
    solve();
}