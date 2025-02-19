#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void rotate(vector<vector<int>>& a, int n, int m) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top < bottom && left < right) {
        int prev = a[top + 1][left];

        for (int i = left; i <= right; i++) {
            swap(prev, a[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            swap(prev, a[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                swap(prev, a[bottom][i]);
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                swap(prev, a[i][left]);
            }
            left++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        rotate(a, n, m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}