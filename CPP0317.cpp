#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int check (string s){
    int n = s.size();
    for (int i = 0; i < n / 2; i++){
        if (s[i] != s[n - i - 1]) return 0;
        if (s[i] & 1) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}