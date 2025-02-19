/*
Cho số N biểu diễn cho ma trận vuông A[4*N][4*N] được điền các con số từ 1 đến 4*N*4*N 
theo thứ tự từ nhỏ đến lớn, từ trái qua phải. Nhiệm vụ của bạn là in các phần tử 
của ma trận theo hai hình cuộn dây. Ví dụ với N = 1 ta có ma trận 4×4 và hai cuộn dây sau:

Cuộn 1: 10  6  2  3  4  8  12  16
Cuộn 2: 7  11  15  14  13  9  5  1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[4 * n][4 * n];
        int c1[8 * n * n], c2[8 * n * n];
        int k = 1;

        for (int i = 0; i < 4 * n; i++) {
            for (int j = 0; j < 4 * n; j++) {
                a[i][j] = k++;
            }
        }

        k = 0;
        int tren = 0, duoi = 4 * n - 1, trai = 1, phai = 4 * n - 1;

        while (tren <= duoi && trai <= phai) {
            for (int i = duoi; i >= tren; i--) {
                c1[k++] = a[i][phai];
            }
            for (int i = phai - 1; i >= trai; i--) {
                c1[k++] = a[tren][i];
            }
            for (int i = tren + 1; i < duoi; i++) {
                c1[k++] = a[i][trai];
            }
            for (int i = trai + 1; i <= phai - 2; i++) {
                c1[k++] = a[duoi - 1][i];
            }

            duoi -= 2;
            tren += 2;
            trai += 2;
            phai -= 2;
        }

        for (int i = 8 * n * n - 1; i >= 0; i--) {
            cout << c1[i] << " ";
        }
        cout << "\n";

        k = 0;
        tren = 0, duoi = 4 * n - 1, trai = 0, phai = 4 * n - 2;

        while (tren <= duoi && trai <= phai) {
            for (int i = tren; i <= duoi; i++) {
                c2[k++] = a[i][trai];
            }
            for (int i = trai + 1; i <= phai; i++) {
                c2[k++] = a[duoi][i];
            }
            for (int i = duoi - 1; i > tren; i--) {
                c2[k++] = a[i][phai];
            }
            for (int i = phai - 1; i > trai + 1; i--) {
                c2[k++] = a[tren + 1][i];
            }

            duoi -= 2;
            tren += 2;
            trai += 2;
            phai -= 2;
        }

        for (int i = 8 * n * n - 1; i >= 0; i--) {
            cout << c2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}