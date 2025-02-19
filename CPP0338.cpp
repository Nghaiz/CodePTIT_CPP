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
        string s;
        int k, ans = 0;
        cin >> s >> k;
        unordered_set<int> se;

        int len = s.size();
        for (int i = 0; i < len; i++){
            for (int j = i; j < len; j++){
                se.insert(s[j]);
                if (se.size() == k) ++ans;
                else if (se.size() > k) break;
            }
            se.clear();
        }
        cout << ans << "\n";
    }
    return 0;
}