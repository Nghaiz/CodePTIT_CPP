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
        int n, k;
        cin >> n >> k;
        int a[n * n];
        for (int i = 0; i < n * n; i++) cin >> a[i];

        sort(a, a + (n * n));
        cout << a[--k] << "\n";
    }
    return 0;
}