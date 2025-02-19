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
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;

        sort(a, a + n);
        for (int i = 0; i < n; i++){
            int *it1 = lower_bound(a + i + 1, a + n, k - a[i]);
            int *it2 = upper_bound(a + i + 1, a + n, k - a[i]);
            sum += it2 - it1;
        }
        cout << sum << "\n";
    }
    return 0;
}