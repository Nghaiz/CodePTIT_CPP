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
        vector<pair<char, int>> v;
        map<char, int> mp;
        for (char x : s){
            mp[x]++;
        }
        for (char x : s){
            if (mp[x]){
                v.push_back({x, mp[x]});
                mp[x] = 0;
            }
        }
        for (pair<char, int> x : v){
            cout << x.first << x.second;
        }
        cout << "\n";
    }
    return 0;
}