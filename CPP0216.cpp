#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int mountain(int a[], int l, int r){
    for (int i = l; i < r; i++){
        //check từ đỉnh núi
        if (a[i] > a[i + 1]){
            for (int j = i + 1; j < r; j++){
                if (a[j] < a[j + 1]) return 0;
            }
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, l, r;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        cin >> l >> r;
        if (mountain(a, l, r)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}