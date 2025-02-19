#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int check (string s){
    int n = s.size(), ans = 0, exp = 1;
    for (int i = n - 1; i >= 0; i--){
        ans += (s[i] - '0') * exp;
        exp *= 2;

        ans %= 10;
        exp %= 10;
    }
    if (ans % 5 == 0) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (check(s)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}