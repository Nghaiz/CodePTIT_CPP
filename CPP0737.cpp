#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;

        int sum = 0, idx = -1;
        for (int i = 0; i < k; i++){
            sum += a[i];
        }
        double tb = 1.0 * sum / k;

        for (int i = k; i < n; i++){
            sum += a[i] - a[i - k];

            double tmp = 1.0 * sum / k;
            if (tmp > tb){
                tb = tmp;
                idx = i;
            }
        }

        for (int i = idx - k + 1; i <= idx; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}