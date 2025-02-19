#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[n - 1] << "\n"; 
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