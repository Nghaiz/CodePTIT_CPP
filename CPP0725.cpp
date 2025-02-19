#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll powMod (ll a, ll b, ll c){
    ll res = 1;
    a %= MOD;
    while (b){
        if (b & 1){
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b >>= 1;
    }
    return res;
}

ll inverse (ll a){
    return powMod(a, MOD - 2, MOD);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        k = min(k, n - k);
        ll ans = 1;
        for (int i = 1; i <= k; i++){
            ans *= (n - i + 1) % MOD;
            ans %= MOD;
            ans *= inverse(i);
            ans %= MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}