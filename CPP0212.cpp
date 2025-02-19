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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        ll res = a[n - 1], tmp = x;
        for (int i = n - 2; i >= 0; i--){
            res += (a[i] * tmp) % MOD;
            tmp *= x;
            tmp %= MOD;
        }
        cout << (res % MOD) << "\n";
    }
    return 0;
}