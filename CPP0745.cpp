#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll fib[1005];
    fib[0] = 0; fib[1] = 1;
    for (int i = 2; i <= 1000; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
        fib[i] %= MOD;
    }

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << fib[n] << "\n"; 
    }
    return 0;
}