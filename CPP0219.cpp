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
        int a[n][m], row[n] = {0}, col[m] = {0};
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
                if (a[i][j] == 1){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (row[i] == 1 || col[j] == 1){
                    cout << 1 << " ";
                }
                else cout << 0 << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}