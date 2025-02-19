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
        
        ll ans = -1e18;
        for (int i = 0; i < n; i++){
            ll tmp = 1;
            for (int j = i; j < n; j++){
                tmp *= a[j];
                ans = max(ans, tmp);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}