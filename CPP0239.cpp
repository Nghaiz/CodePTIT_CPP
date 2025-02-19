#include <bits/stdc++.h>
using namespace std;

const double EPS = 1E-9;

int compute_ans(vector<vector<double>> a) {
    int n = a.size();
    int m = a[0].size();

    int ans = 0;
    vector<bool> row_selected(n, false);
    for (int i = 0; i < m; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (!row_selected[j] && abs(a[j][i]) > EPS) break;
        }

        if (j != n) {
            ++ans;
            row_selected[j] = true;
            for (int p = i + 1; p < m; p++){
                a[j][p] /= a[j][i];
            }
                
            for (int k = 0; k < n; k++) {
                if (k != j && abs(a[k][i]) > EPS) {
                    for (int p = i + 1; p < m; ++p){
                        a[k][p] -= a[j][p] * a[k][i];
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<double>> a(n, vector<double>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        cout << compute_ans(a) << "\n";
    }
    return 0;
}


/*
Cho ma trận A[N][M]. Hãy tìm hạng của ma trận A[N][M]. Hạng của ma trận (Rank Matrix) là 
số các cột hoặc các hàng độc lập tuyến tính. 
Ví dụ hạng của ma trận dưới đây là 2 vì có hàng 1 và hàng 2 là phụ thuộc tuyến tính.

10 20 10       
20 40 20       
30 50 0    

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M; 
dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
T, N, M, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤15; -102≤ A[i][j] ≤102.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/