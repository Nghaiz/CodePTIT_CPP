#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int isPrime(int n){
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int isPerfectNum (ll n){
    for (int p = 2; p <= 32; p++){
        if (isPrime(p)){
            ll tmp1 = pow(2, p) - 1;
            if (isPrime(tmp1)){
                ll tmp2 = pow(2, p - 1);
                if (tmp1 * tmp2 == n) return 1;
            }
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        if (isPerfectNum(n)) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}