#include <bits/stdc++.h>

using namespace std;

int t, n, m, cnt;
int a[101][101];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void spread (int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 8; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if (a[i1][j1] == 1 && i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
            spread(i1, j1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cnt = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 1){
                    ++cnt;
                    spread(i, j);
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}