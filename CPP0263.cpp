#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> mat(n + 2, vector<int>(n + 2, 0));
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> diag1 = mat;
    vector<vector<int>> diag2 = mat;
    
    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= n; j++) {
            diag1[i][j] += diag1[i-1][j-1];
        }
    }
    for(int i = 2; i <= n; i++) {
        for(int j = n-1; j >= 1; j--) {
            diag2[i][j] += diag2[i-1][j+1];
        }
    }
    int ans = -1e9;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int size = 2; size <= min(i, j); size++) {
                int r = i - size + 1;
                int c = j - size + 1;

                int mainDiag = diag1[i][j] - diag1[r-1][c-1];
                int secDiag = diag2[i][c] - diag2[r-1][j+1];
                
                ans = max(ans, mainDiag - secDiag);
            }
        }
    }
    cout << ans;
    return 0;
}