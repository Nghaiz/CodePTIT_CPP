#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], dp[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            dp[i] = a[i];
        }
        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++){
                if (a[j] < a[i]){   // Nếu a[j] < a[i] thì mới có thể tạo thành dãy tăng dần
                    dp[i] = max(a[i] + dp[j], dp[i]);
                }
            }
        }
        cout << *max_element(dp, dp + n) << "\n";
    }
    return 0;
}