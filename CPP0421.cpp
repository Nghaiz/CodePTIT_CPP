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
        ll x;
        cin >> n;
        unordered_set<ll> se;
        for (int i = 0; i < n; i++){
            cin >> x;
            se.insert(x);
        }
        for (int i = 0; i < n; i++){
            if (se.count(i)) cout << i << " ";
            else cout << -1 << " ";
        }
        cout << "\n";
    }
    return 0;
}