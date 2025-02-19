#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, q;
        cin >> n >> q;
        int a[n + 5];
        for (int i = 0; i < n; i++) cin >> a[i];

        ll f[n];
        f[0] = a[0];
        for (int i = 1; i < n; i++){
            f[i] = f[i - 1] + a[i];
        }

        for (int i = 1; i <= q; i++){
            int l, r;
            cin >> l >> r;
            --l; --r;
            if (l == 0) cout << f[r] << "\n";
            else cout << f[r] - f[l - 1] << "\n";
        }
    }
    return 0;
}