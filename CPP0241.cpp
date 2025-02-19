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
        
        int l = 0, r = n - 1, ans = 0;
        while (l <= r){
            if (a[l] == a[r]) {
                ++l; 
                --r;
            }
            else if (a[l] < a[r]){
                ++l;
                a[l] += a[l - 1];
                
                ans++;
            }
            else {
                --r;
                a[r] += a[r + 1];

                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}