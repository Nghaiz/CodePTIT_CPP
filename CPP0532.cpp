/*
Cho một đa giác lồi có N đỉnh trên mặt phẳng Oxy.
Nhiệm vụ của bạn là hãy tính diện tích đa giác này.

Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
Mỗi test bắt đầu bởi số nguyên N (N ≤ 1000).
N dòng tiếp theo, mỗi dòng gồm 2 số nguyên x[i], y[i] (-1000 ≤ x[i], y[i] ≤ 1000) là tọa độ 
của điểm thứ i. Các điểm được liệt kê theo thứ tự ngược chiều quay kim đồng hồ.

*/

#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct Dinh {
    double x;
    double y;
} Dinh;

void nhap(Dinh ds[], int n, double &S) {
    // Nhập tọa độ các đỉnh
    for (int i = 0; i < n; i++) {
        cin >> ds[i].x >> ds[i].y;
    }

    // Tính diện tích theo công thức Shoelace
    double a = 0, b = 0;
    for (int i = 0; i < n - 1; i++) {
        a += ds[i].x * ds[i + 1].y;
        b += ds[i].y * ds[i + 1].x;
    }
    a += ds[n - 1].x * ds[0].y;
    b += ds[n - 1].y * ds[0].x;

    S = 0.5 * abs(a - b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Dinh ds[n];
        double S;
        nhap(ds, n, S);
        cout << fixed << setprecision(3) << S << "\n";
    }
    return 0;
}