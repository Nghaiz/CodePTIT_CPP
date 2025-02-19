/*
Cho ma trận vuông A[N][N] có các phần tử hoặc là ký tự ‘O’ hoặc là ký tự ‘X’. 
Hãy tìm cấp của ma trận vuông lớn nhất có các phần tử ‘X’ bao quanh các phần tử ‘O’. 
Ví dụ với ma trận dưới đây ta sẽ có kết quả là 3.

X O X X X
X X X X X
X X O X O
X X X X X    
X X X O O                                
*/

#include <iostream>
using namespace std;

char a[25][25];
int n, res, i, j;

void find_square(int k) {
    if (i + k < n && j + k < n) {
        if (a[i + k][j] == 'X' && a[i][j + k] == 'X') {
            find_square(k + 1);
            for (int x = 1; x <= k; x++) {
                if (a[i + k][j + x] == 'O' || a[i + x][j + k] == 'O') return;
            }

            res = max(k + 1, res);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        res = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == 'X' && res <= min(n - i - 1, n - j - 1)) {
                    find_square(0);
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}