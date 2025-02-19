#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(){
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j >= 0; j--){
            if (j - i <= ans) break;      //dam bao chi co 1 (j - i) duy nhat doi voi moi lan chay for j lui ve
            if (a[i] <= a[j]){
                ans = max(ans, j - i);
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}