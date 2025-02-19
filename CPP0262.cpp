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
        ll n, m;
        cin >> n >> m;
        ll tong = n * (n + 1) / 2;
        ll s1 = (tong + m) / 2, s2 = (tong - m) / 2;

        if (__gcd(s1, s2) == 1 && (tong + m) % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}