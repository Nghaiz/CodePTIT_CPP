#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, ll k){
    int cum = n / k, du = n % k;

    //tong = so luong so * (so cuoi + so dau)
    ll tong_cum = (k - 1) * k / 2;   //(k - 1 + 1)
    ll tong_du = du * (du + 1) / 2;

    cout << cum * tong_cum + tong_du << "\n";
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