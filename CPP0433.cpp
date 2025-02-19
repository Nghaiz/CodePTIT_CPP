#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b){
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), cmp);

        for (pair<int, int> x : v) {
            for (int i = 0; i < x.second; i++){
                cout << x.first << " "; 
            }
        }
        cout << "\n";
    }
    return 0;
}