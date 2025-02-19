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
        int n, x, ans = 0;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }
        for (unordered_map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
            int tmp = it->second;
            if (tmp > 1) ans += tmp; 
        }
        cout << ans << "\n";
    }
    return 0;
}