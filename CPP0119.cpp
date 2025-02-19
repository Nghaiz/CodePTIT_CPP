#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve (int n){
    if (n & 1) {
        cout << 0 << "\n";
        return;
    }
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (i % 2 == 0) ++cnt;
            if (i != n / i){
                if ((n / i) % 2 == 0) ++cnt;
            }
        }
    }
    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}