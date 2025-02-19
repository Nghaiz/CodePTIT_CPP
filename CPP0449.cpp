#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);

    for (int i = 0; i < n; i++){
        if (binary_search(a, a + n, k + a[i])) {
            cout << "1\n";
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
        solve();
    }
    return 0;
}