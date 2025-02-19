#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    map<char, int> mp;
    mp['A'] = mp['B'] = mp['C'] = 2; 
    mp['D'] = mp['E'] = mp['F'] = 3; 
    mp['G'] = mp['H'] = mp['I'] = 4; 
    mp['J'] = mp['K'] = mp['L'] = 5; 
    mp['M'] = mp['N'] = mp['O'] = 6; 
    mp['P'] = mp['Q'] = mp['R'] = mp['S'] = 7; 
    mp['T'] = mp['U'] = mp['V'] = 8; 
    mp['W'] = mp['X'] = mp['Y'] = mp['Z'] = 9; 

    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        transform(begin(s), end(s), begin(s), ::toupper);
        int ok = 1, l = 0, r = s.size() - 1;
        while (l < r){
            if (mp[s[l]] != mp[s[r]]){
                cout << "NO\n";
                ok = 0;
                break;
            }
            ++l;
            --r;
        }
        if (ok) cout << "YES\n";
    }
    return 0;
}