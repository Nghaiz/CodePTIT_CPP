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
        int n, idx = 0;
        cin >> n;
        int a[n], b[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        for (int i = 0; i < n; i += 2) b[i] = a[idx++];
        for (int i = 1; i < n; i += 2) b[i] = a[idx++];

        for (int x : b) cout << x << " ";
        cout << "\n";
    }
    return 0;
}