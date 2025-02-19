#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, idx = 0;
    cin >> n;
    int a[n][n], b[n * n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            b[idx++] = a[i][j];
        }
    }
    sort(b, b + n * n);
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1, cnt = 0;
    while (c1 <= c2 && h1 <= h2){
        for (int i = c1; i <= c2; i++){
            a[h1][i] = b[cnt++];
        }
        ++h1;
        for (int i = h1; i <= h2; i++){
            a[i][c2] = b[cnt++];
        }
        --c2;
        for (int i = c2; i >= c1; i--){
            a[h2][i] = b[cnt++];
        }
        --h2;
        for (int i = h2; i >= h1; i--){
            a[i][c1] = b[cnt++];
        }
        ++c1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}