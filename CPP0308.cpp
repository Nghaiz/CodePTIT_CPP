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
        unordered_map<char, int> mp;
        for (int i = 0; s[i] != '\0'; i++){
            mp[s[i]]++;
        }
        for (int i = 0; s[i] != '\0'; i++){
            if (mp[s[i]] == 1){
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}