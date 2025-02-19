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
        int n, x, ans = -1;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++){
            cin >> x;
            v.push_back({x, i});
        }   
        for (int i = n - 1; i >= 0; i--){
            for (int j = 0; j < n; j++){
                int tmp = v[i].first - v[j].first;
                if (v[i].second > v[j].second && tmp > ans) ans = tmp;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}