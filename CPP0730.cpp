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

        // Kadane
        ll sum1 = 0, sum2 = -1e18;
        for (int i = 0; i < n; i++){
            sum1 += a[i];
            sum2 = max(sum1, sum2);
            if (sum1 < 0) sum1 = 0;
        }
        cout << sum2 << "\n";
    }
    return 0;
}