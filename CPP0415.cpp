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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        cout << 1ll * (*max_element(a, a + n)) * (*min_element(b, b + m)) << "\n"; 
    }
    return 0;
}