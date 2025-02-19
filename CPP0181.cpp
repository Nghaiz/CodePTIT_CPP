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
        ll a, x, y;
        cin >> a >> x >> y;

        ll n = __gcd(x, y);
        for (int i = 0; i < n; i++){
            cout << a;
        }
        cout << "\n";
    }
    return 0;
}