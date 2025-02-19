#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int check (string s){
    if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10]) return 1;
    if (s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10]) return 1;
    if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return 1;
    if ((s[5] == '6' || s[5] == '8') && (s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[9] == '6' || s[9] == '8') && (s[10] == '6' || s[10] == '8')) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}