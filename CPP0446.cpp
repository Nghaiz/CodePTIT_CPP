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
        int n, ans = 1e9;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                int tmp = a[i] + a[j];
                if (abs(tmp) < abs(ans)) ans = tmp;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}