#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    set<string> st;
    sort(s.begin(), s.end());
    st.insert(s);
    while(next_permutation(s.begin(), s.end())){
        st.insert(s);
    }
    cout << st.size() << "\n";
    for(auto it: st){
        cout << it << "\n";
    }
}
int main(){
    solve();
}