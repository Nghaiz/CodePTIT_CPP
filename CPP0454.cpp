#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll a[], int n){
    for (int i = n - 1; i >= 2; i--){
        int l = 0, r = i - 1;
        while (l < r){
            ll tmp = a[l] + a[r];
            if (tmp == a[i]) {
                cout << "YES\n";
                return;
            } 
            else if (tmp > a[i]) --r;
            else ++l;
        }
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            a[i] *= a[i];
        }
        sort(a, a + n);
        
        solve(a, n);
    }
    return 0;
}