#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll gcd (ll a, ll b){
    while (b){
        ll tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

ll powMod (ll a, ll b){
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int a[n];
        ll h = 1;

        for (int &x : a) {
            cin >> x;
            h *= x;
            h %= MOD;
        }

        ll g = a[0];
        for (int i = 1; i < n; i++) g = gcd(g, a[i]);
        cout << powMod(h, g) << "\n";
    }
    return 0;
}