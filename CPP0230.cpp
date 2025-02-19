#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int sum = a[i][0] + a[i][1] + a[i][2];
        if (sum > 1) ++cnt;
    }
    cout << cnt;
    return 0;
}