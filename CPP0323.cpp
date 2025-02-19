#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll stringMod(string s, ll m){
    ll res = 0;
    for (int i = 0; s[i] != '\0'; i++){
        res = (res * 10 + (s[i] - '0')) % m;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        ll m;
        cin >> s >> m;
        cout << stringMod(s, m) << "\n";
    }
    return 0;
}