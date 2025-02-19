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
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;

        ll dp[n + 1];
        dp[0] = 0; dp[1] = a[0];
        for (int i = 2; i <= n; i++){
            dp[i] = max(dp[i - 1], a[i - 1] + dp[i - 2]);
        }
        cout << dp[n] << "\n";
    }
    return 0;
}