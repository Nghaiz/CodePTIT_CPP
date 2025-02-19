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
        int n, tmp = -1e9, cnt = 0;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                tmp = max(tmp, a[i][j]);
            }
        }
        vector<int> v(1e5 + 1, 0);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (v[a[i][j]] == i) v[a[i][j]]++;
            }
        }
        for (int i = 0; i <= tmp; i++){
            if (v[i] == n) ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}