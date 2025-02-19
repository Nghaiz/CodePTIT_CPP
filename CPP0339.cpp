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
        cin >> s;
        map<char, int> mp;
        for (char x : s){
            mp[x]++;
        }
        ll ans = s.size();
        for (pair<char, int> x : mp){
            ans += (x.second * (x.second - 1) / 2);
        }
        cout << ans << "\n";
    }
    return 0;
}