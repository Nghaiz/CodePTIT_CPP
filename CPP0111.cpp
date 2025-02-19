#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check (string s){
    for (int i = 1; s[i] != '\0'; i++){
        int d1 = s[i] - '0', d2 = s[i - 1] - '0';
        if (abs(d1 - d2) != 1) return 0;
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