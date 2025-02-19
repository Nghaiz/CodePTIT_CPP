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
        int k, cnt = 0;
        cin >> s >> k;

        const string valid = "abcdefghijklmnopqrstuvwxyz";
        unordered_set<char> se;
        for (int i = 0; s[i] != '\0'; i++){
            se.insert(s[i]);
        }
        for (char x : valid){
            if (se.count(x) == 0) cnt++;
        }
        cout << (cnt <= k ? 1 : 0) << "\n";
    }
    return 0;
}