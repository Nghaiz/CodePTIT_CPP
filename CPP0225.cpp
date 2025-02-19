#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, sum = 0;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                sum += a[i][j];
            }
        }
        int row[n], col[n];  //Tinh tong cac hang va cac cot
        for (int i = 0; i < n; i++){
            row[i] = 0, col[i] = 0;
            for (int j = 0; j < n; j++){
                row[i] += a[i][j];
                col[i] += a[j][i];
            }
        }
        // Tim ra xem tong hang/cot nao la lon nhat (vi ko cho giam chi cho tang 1 dvi)
        int tmp = max(*max_element(row, row + n), *max_element(col, col + n));
        cout << tmp * n - sum << "\n";
    }
    return 0;
}