#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, vector<vector<int>> a) {
    for (int d = 0; d <= n + m - 2; d++) {
        if (d % 2 == 0) {
            for (int i = min(d, n - 1); i >= 0 && d - i < m; i--) {
                cout << a[i][d - i] << " ";
            }
        } else {
            for (int i = max(0, d - m + 1); i <= min(d, n - 1); i++) {
                cout << a[i][d - i] << " ";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        solve(n, m, a);
        cout << "\n";
    }
    return 0;
}