#include <bits/stdc++.h>
#define ll long long
#define vOD 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> v(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }

        vector<vector<int>> hist(m, vector<int>(n, 0));
        for (int j = 0; j < n; j++) {
            hist[0][j] = v[0][j];
            for (int i = 1; i < m; i++) {
                if (v[i][j] == 0) hist[i][j] = 0;
                else hist[i][j] = hist[i - 1][j] + 1;
            }
        }

        // Sắp xếp từng hàng của hist
        for (int i = 0; i < m; i++) {
            sort(hist[i].begin(), hist[i].end());
        }

        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = n - 1; j >= 0; j--) {
                // hist[i][j] * (n - j) là diện tích của hình chữ nhật
                res = max(res, hist[i][j] * (n - j));
            }
        }
        cout << res << "\n";
    }
    return 0;
}