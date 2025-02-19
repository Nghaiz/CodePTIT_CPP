#include <iostream>
#include <vector>
using namespace std;

void printDiagonalOrder(int N, int M, const vector<vector<int>>& A) {
    // Duyệt theo tổng của chỉ số hàng và cột
    for (int d = 0; d <= N + M - 2; d++) {
        if (d % 2 == 0) {
            // Khi d chẵn, duyệt từ dưới lên trên
            for (int i = min(d, N - 1); i >= 0 && d - i < M; i--) {
                cout << A[i][d - i] << " ";
            }
        } else {
            // Khi d lẻ, duyệt từ trên xuống dưới
            for (int i = max(0, d - M + 1); i <= min(d, N - 1); i++) {
                cout << A[i][d - i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;  // Số lượng bộ test
    while (T--) {
        int N, M;
        cin >> N >> M;  // Kích thước của ma trận
        vector<vector<int>> A(N, vector<int>(M));

        // Nhập các phần tử của ma trận
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }

        // In các phần tử theo đường chéo
        printDiagonalOrder(N, M, A);
    }

    return 0;
}
