#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k, win_len = 0;
        cin >> n >> k;
        int a[n];
        for (int &x : a){
            cin >> x;
            if (x <= k) win_len++;
        }

        int tmp = 0;
        for (int i = 0; i < win_len; i++){
            if (a[i] > k) ++tmp;
        }

        int ans = tmp;
        for (int i = win_len; i < n; i++){
            if (a[i] > k) ++tmp;
            if (a[i - win_len] > k) --tmp;

            ans = min(ans, tmp); 
        }
        cout << ans << "\n";
    }
    return 0;
}