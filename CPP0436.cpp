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
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);

        for (int i = 0; i < n; i++){
            int *it = upper_bound(b, b + n, a[i]);
            if (it == b + n) cout << "_ ";
            else cout << *it << " ";
        }
        cout << "\n";
    }
    return 0;
}