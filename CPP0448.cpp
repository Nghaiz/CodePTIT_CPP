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
        int n, x, a;
        cin >> n >> x;
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a;
            mp[a]++;
        }
        if (mp[x]) cout << mp[x] << "\n";
        else cout << "-1\n";
    }
    return 0;
}