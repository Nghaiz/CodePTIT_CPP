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
        int n, m, x;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n + m; i++){
            cin >> x;
            mp[x]++;
        }
        for (pair<int, int> a : mp) cout << a.first << " ";
        cout << "\n";
        for (pair<int, int> a : mp){
            if (a.second == 2) cout << a.first << " ";
        }
        cout << "\n";
    }
    return 0;
}