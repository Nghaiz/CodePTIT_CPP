#include <iostream>
#include <vector>
using namespace std;

int n, k, res;
vector<vector<int>> a;

void Try(int i, int j, int cur_sum) {
    if (cur_sum > k) return;

    if (i == n - 1 && j == n - 1) {
        if (cur_sum == k) res++;
        return;
    }

    if (i + 1 < n) Try(i + 1, j, cur_sum + a[i + 1][j]);

    if (j + 1 < n) Try(i, j + 1, cur_sum + a[i][j + 1]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        a.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        res = 0;
        Try(0, 0, a[0][0]);
        cout << res << "\n";
    }
    return 0;
}
