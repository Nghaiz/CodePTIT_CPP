#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd (ll a, ll b){
    while (b){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

ll lcm (ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll x, y, z, n;
        cin >> x >> y >> z >> n;

        ll bc = lcm(lcm(x, y), z);
        ll a = pow(10, n - 1), b = pow(10, n) - 1;

        ll ans = (a + bc - 1) / bc * bc;
        if (ans <= b) cout << ans << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}
