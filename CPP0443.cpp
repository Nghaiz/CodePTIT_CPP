#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int find(int a[], int n){
    unordered_set<int> se;
    for (int i = 0; i < n; i++) se.insert(a[i]);

    for (int i = 1; i <= n; i++){
        if (se.count(i) == 0) return i;
    }
    return n + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        --n;
        int a[n];
        for (int &x : a) cin >> x;

        cout << find(a, n) << "\n";
    }
    return 0;
}