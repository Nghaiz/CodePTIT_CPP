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
        int cnt[1000001] = {0};
        int x, n, l = 1e9, r = -1e9, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> x;
            cnt[x] = 1;
            l = min(l, x);
            r = max(r, x);
        }
        for (int i = l; i <= r; i++){
            ans += 1 - cnt[i];
        }
        cout << ans << "\n";
    }
    return 0;
}