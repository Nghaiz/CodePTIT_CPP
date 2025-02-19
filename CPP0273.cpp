#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n], f[n];
    for (int &x : a) cin >> x;
    f[0] = a[0];

    for (int i = 1; i < n; i++) f[i] = a[i] + f[i - 1];   

    for (int i = 1; i < n; i++){
        int left = f[i], right = f[n - 1] - f[i - 1];
        if (left == right) {
            cout << i + 1 << "\n";
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