#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int prime[100001], isPrime[100001];

void sieve (){
    for (int i = 1; i <= 100001; i++) {
        prime[i] = i;
        isPrime[i] = 1;
    }
    
    isPrime[0] = isPrime[1] = 0;
    int tmp = sqrt(100001);

    for (int i = 2; i <= tmp; i++){
        if (prime[i] == i){
            for (int j = i * i; j <= 100001; j += i) {
                if (prime[j] == j) prime[j] = i;

                isPrime[j] = 0;
            }
        }
    }
}

int tong (int n){
    if (n < 10) return n;
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int check (int n){
    int m = tong(n), res = 0;
    while (n > 1){
        int tmp = prime[n];
        while (n % tmp == 0){
            res += tong(tmp);
            n /= tmp;
        }
    }
    return res == m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    sieve();
    while (t--){
        int n;
        cin >> n;
        if (!isPrime[n] && check(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}