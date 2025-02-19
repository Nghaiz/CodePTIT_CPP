#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int binarySearch (int a[], int n, int x){
    int l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x) return 1;
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int &x : a) cin >> x;
        if (binarySearch(a, n, x)) cout << 1 << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}