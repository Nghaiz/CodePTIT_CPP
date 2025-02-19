#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    
    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++){
        vector<int>::iterator it = upper_bound(ans.begin(), ans.end(), a[i] - 1);
        if (it == ans.end()) ans.push_back(a[i]);
        else *it = min(*it, a[i]);
    }
    cout << ans.size() << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}