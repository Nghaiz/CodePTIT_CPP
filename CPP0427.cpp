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
        int a[n];
        for (int &x : a) cin >> x;
        
        for (int i = 0; i < n - 1; i++){
            if (a[i + 1] != 0 && a[i] == a[i + 1]){
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == 0) ++cnt;
            else cout << a[i] << " ";
        }
        for (int i = 0; i < cnt; i++) cout << 0 << " ";
        cout << "\n";
    }
    return 0;
}