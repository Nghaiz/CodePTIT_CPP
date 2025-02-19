#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int isPrime (ll n){
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

ll phi (ll n){
    ll res = n;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            res -= res / i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) res -= res / n;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll t = phi(n);
        if (isPrime(t)) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}