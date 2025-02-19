#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int isPrime (ll n){
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (ll i = 5; i * i <= n; i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int tang (ll n){
    int d1, d2;
    while (n >= 10){
        d1 = n % 10;
        d2 = (n % 100) / 10;
        if (d2 >= d1) return 0;
        n /= 10;
    }
    return 1;
}

int giam (ll n){
    int d1, d2;
    while (n >= 10){
        d1 = n % 10;
        d2 = (n % 100) / 10;
        if (d2 <= d1) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n, cnt = 0;
        cin >> n;
        ll start = pow(10, n - 1), end = pow(10, n) - 1;
        for (ll i = start; i <= end; i++){
            if ((tang(i) || giam(i)) && isPrime(i)) ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}