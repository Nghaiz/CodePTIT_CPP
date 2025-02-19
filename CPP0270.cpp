#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n][m], kernel[3][3];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> kernel[i][j];
            }
        }   
        long long sum = 0;
        for (int i = 1; i < n - 1; i++){
            for (int j = 1; j < m - 1; j++){
                for (int k = 0; k < 9; k++){
                    sum += (a[i + dx[k]][j + dy[k]] * kernel[1 + dx[k]][1 + dy[k]]);
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}