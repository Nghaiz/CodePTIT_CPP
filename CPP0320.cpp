#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(string s){
    if (s[0] == '0') {
        cout << "INVALID\n";
        return;
    }
    unordered_set<char> se;
    for (char x : s){
        if (!isdigit(x)) {
            cout << "INVALID\n";
            return;
        }
        se.insert(x);
    }
    if (se.size() == 10) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}