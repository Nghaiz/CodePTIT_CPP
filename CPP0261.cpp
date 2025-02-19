#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] *= b[i % m][j % m];

            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}