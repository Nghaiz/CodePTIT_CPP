#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(int n, ll k){
    int cum = n / k, du = n % k;

    ll tong_cum = (k - 1) * k / 2;
    ll tong_du = du * (du + 1) / 2;

    if (k == cum * tong_cum + tong_du) cout << "1\n";
    else cout << "0\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        ll k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}