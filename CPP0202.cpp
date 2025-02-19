#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, ans = 1e9;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        for (int i = 1; i < n; i++){
            ans = min(ans, a[i] - a[i - 1]);
        }
        cout << ans << "\n";
    }   
    return 0;
}