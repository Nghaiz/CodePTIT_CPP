#include <bits/stdc++.h>
using namespace std;

void solve(int a, int m){
    for (int i = 1; i < m; i++){
        if (i * a % m == 1){
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int a, m;
        cin >> a >> m;
        solve(a, m);
    }
    return 0;
}