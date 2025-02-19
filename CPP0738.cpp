#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        ll steps = 0;
        while (true) {
            // Bước 1: Xử lý các phần tử lẻ
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 1) {
                    a[i]--; // Giảm phần tử lẻ về chẵn
                    steps++;
                }
            }

            // Kiểm tra nếu toàn bộ mảng đã về 0
            bool allZero = true;
            for (int i = 0; i < n; i++) {
                if (a[i] != 0) {
                    allZero = false;
                    break;
                }
            }
            if (allZero) break;

            // Bước 2: Chia đôi toàn bộ mảng
            for (int i = 0; i < n; i++) a[i] /= 2;

            steps++;
        }
        cout << steps << "\n";
    }
    return 0;
}