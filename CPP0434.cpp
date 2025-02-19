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
        
        for (int i = 0; i < n; i++){
            if (i == 0){
                cout << 1ll * a[i] * a[i + 1] << " ";
            }
            else if (i == n - 1){
                cout << 1ll * a[i] * a[i - 1] << " ";
            }
            else {
                cout << 1ll * a[i - 1] * a[i + 1] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}