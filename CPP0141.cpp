#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll fib[100];

void fibonacci (){
    fib[0] = 0; fib[1] = 1;
    for (int i = 2; i <= 92; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int fibo (ll n){
    for (int i = 0; i <= 92; i++){
        if (fib[i] == n) return 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fibonacci();
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        if (fibo(n)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}