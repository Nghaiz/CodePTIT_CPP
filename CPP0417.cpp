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
        sort(a, a + n);
        for (int i = 0; i < n; i++){
            if (a[i] != b[i]){
                cout << i + 1 << " ";
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--){
            if (a[i] != b[i]){
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}