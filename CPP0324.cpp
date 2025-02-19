#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll stringMod(string s, ll m){
    ll res = 0;
    for (int i = 0; s[i] != '\0'; i++){
        res = (res * 10 + (s[i] - '0')) % m;
    }
    return res;
}

ll powMod (ll a, ll b, ll m){
    ll res = 1;
    while (b){
        if (b & 1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string a;
        ll b, m;
        cin >> a >> b >> m;
        ll tmp = stringMod(a, m);
        cout << powMod(tmp, b, m) << "\n";
    }
    return 0;
}