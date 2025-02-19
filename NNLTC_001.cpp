#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL); cout.tie(NULL);
    int x;
    vector<int> res;
    unordered_map<int, int> mp;

    while (cin >> x) {
        if (mp.find(x) == mp.end()) res.push_back(x);
        
        mp[x]++;
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " " << mp[res[i]] << "\n";
    }
    return 0;
}