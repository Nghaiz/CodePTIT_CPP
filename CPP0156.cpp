#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n, int p){
    ll ans = 0;
    for (ll x = 1; x < p; x++){
        if ((x*  x) % p == 1){
            ll last = x + p * (n / p);

            if (last > n) last -= p;

            ans += ((last - x) / p + 1);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int b, p;
        cin >> b >> p;
        cout << solve(b, p) << "\n";
    }
    return 0;
}