#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll ptich (ll n){
    ll max = 2;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            max = i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) max = n;
    return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << ptich(n) << "\n";
    }
    return 0;
}