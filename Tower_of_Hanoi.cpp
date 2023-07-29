#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> solution;
void hanoi(int n, int start, int end){
    if(n == 1){
        solution.push_back(make_pair(start,end));
    }else{
        int other = 6 - (start + end);
        hanoi(n-1, start, other);
        solution.push_back(make_pair(start, end));
        hanoi(n-1, other, end);
    }
}
void solve(){
    int n; 
    cin >> n;
    hanoi(n, 1, 3);
    cout << solution.size() << "\n";
    for(auto& it: solution){
        cout << it.first << " " << it.second << "\n";
    }
}
int main(){
    solve();
}